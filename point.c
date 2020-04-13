#include <stdio.h>
#include <math.h>
#include "point.h"

int find_shortest_distance_index(double distances[5], int length)
{
  int index = 0;
  for (int i = 1; i < length; i++)
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

double find_distance_between(Point A, Point B)
{
  int xRange = A.x - B.x;
  int yRange = A.y - B.y;
  return sqrt(square(xRange) + square(yRange));
}

Point get_closest_food(Point food_points[], Point current_location, int size)
{
  double distances[size];
  for (int index = 0; index < size; index++)
  {
    distances[index] = find_distance_between(food_points[index], current_location);
  }
  int position = find_shortest_distance_index(distances, size);
  return food_points[position];
}

