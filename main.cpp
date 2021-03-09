//
//  main.cpp
//  ASTE499 HW7 Part1
//
//  Created by Elana Helou on 3/9/21.
//

/*! \brief
 *
 *goal: an object called double3 is used for performing 3D vector operations
 *
 */


#include <iostream>
#include "Vec.h"

int main(int num_args, char **args) {
    double3 a{0,1,2}; /**@param x, y, z */
    double3 b{0,0,1};
    
    std::cout<<a-b<<std::endl; /**< subtract the vectors */
    std::cout<<dot(a,b)<<std::endl; /**< get the dot product */
    return 0;
}
