/*
 * methods.h
 *
 *  Created on: 13 ????. 2019 ?.
 *      Author: User
 */

#ifndef SRC_METHODS_H_
#define SRC_METHODS_H_

#include "constants.h"

int getHeight()
{
  std::cout << "Please, Enter height of the Tower in meters: " << std::endl;
  int height {};
  std::cin >> height ;
  return height;
}

void calculateDistanceOfFaling (int HeigtOfTheTower)
{

  int seconds {};
  while (true)
  {
      double resultMetersLeftToTheGround {};
      resultMetersLeftToTheGround = HeigtOfTheTower - (myConstants::gravity * seconds * seconds / 2);
      if (resultMetersLeftToTheGround < 0)
      {
	  std::cout << "At "<< seconds <<", the ball is on the ground" << std::endl;
	  break;
      }
      std::cout << "At " << seconds << " seconds, the ball is at height: "
	  << resultMetersLeftToTheGround << " meters"
	  << std::endl;
      seconds++;
  }

}

#endif /* SRC_METHODS_H_ */
