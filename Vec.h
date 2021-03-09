//
//  Vec.h
//  ASTE499 HW7 Part1
//
//  Created by Elana Helou on 3/9/21.
//

#ifndef Vec_h
#define Vec_h

#include <ostream>
#include <math.h>

template<typename T>
class _vec3{                        // generic 3D vector of type T
public:
    _vec3<T>(): d{0,0,0} {}
    _vec3<T>(T a, T b, T c): d{a,b,c} {}
    T& operator[] (int i) {return d[i];}
    T operator[] (int i) const {return d[i];}
    

    friend _vec3<T> operator+(const _vec3<T>&a, const _vec3<T>&b) {
        return _vec3<T>(a[0]+b[0],a[1]+b[1],a[2]+b[2]); /**@return a double3 style vector */
    }
    

    friend _vec3<T> operator-(const _vec3<T>&a, const _vec3<T>&b) {
        return _vec3<T>(a[0]-b[0],a[1]-b[1],a[2]-b[2]); /**@return a double3 style vector */
    }
    
    /**
     * \f$ \vec{a} \cdot \vec{b} =  a_0b_0 + a_1b_1 + a_2b_2] \f$
     */
    friend T dot(const _vec3<T>&a, const _vec3<T>&b) {
        return a[0]*b[0]+a[1]*b[1]+a[2]*b[2]; /** @return an interger */
    }
    

    friend double mag(const _vec3<T>&a) {return sqrt(dot(a,a));} /** @return a float */
    
    friend std::ostream& operator<<(std::ostream &out, const _vec3<T>&a) {
        out<<a[0]<<" "<<a[1]<<" "<<a[2]; return out;
    }
    
protected:
    T d[3];
    
};

using double3 = _vec3<double>;      // assign a nickname


#endif /* Vec_h */
