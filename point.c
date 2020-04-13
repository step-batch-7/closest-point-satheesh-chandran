#include <stdio.h>
#include <math.h>
#include "point.h"

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
  Point closest_food = food_points[0];
  for (int index = 1; index < size; index++)
  {
    double distance1 = find_distance_between(closest_food, current_location);
    double distance2 = find_distance_between(food_points[index], current_location);
    if(distance2 < distance1)
    {
      closest_food = food_points[index];
    }
  }
  return closest_food;
}
