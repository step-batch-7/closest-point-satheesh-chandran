#include <stdio.h>
#include "point.h"

#define FOOD_POINTS {{18, 76}, {19, 66}, {89, 57}, {9 ,71}, {55, 38}};

int main(void)
{
  struct Point food_points[] = FOOD_POINTS;
  struct Point current_location = {97, 27};
  struct Point closest_food = get_closest_food(food_points, current_location);
  printf("X co-ordinate is %d\n", closest_food.x);
  printf("Y co-ordinate is %d\n", closest_food.y);
  return 0;
}