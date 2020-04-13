#include <stdio.h>
#include "point.h"

int main(void)
{
  Point food_points[] = FOOD_POINTS;
  Point current_location = {69, 7};
  int size = sizeof(food_points) / sizeof(Point);
  Point closest_food = get_closest_food(food_points, current_location, size);
  printf("X co-ordinate is %d\n", closest_food.x);
  printf("Y co-ordinate is %d\n", closest_food.y);
  return 0;
}