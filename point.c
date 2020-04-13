#include <stdio.h>
#include <math.h>
#include "point.h"

int find_shortest_distance_index(double distances[5])
{
  int index = 0;
  int length = *(&distances + 1) - distances;
  for (int i = 1; i < length - 1; i++)
  {
    if(distances[i] < distances[index])
    {
      index = i;
    }
  }
  return index;
}

int square(int num)
{
  return num * num;
}

double find_distance_between(struct Point A, struct Point B)
{
  int xRange = A.x - B.x;
  int yRange = A.y - B.y;
  return sqrt(square(xRange) + square(yRange));
}

struct Point get_closest_food(struct Point food_points[], struct Point current_location)
{
  double distances[5];
  for (int index = 0; index < 5; index++)
  {
    distances[index] = find_distance_between(food_points[index], current_location);
  }
  int position = find_shortest_distance_index(distances);
  return food_points[position];
}

