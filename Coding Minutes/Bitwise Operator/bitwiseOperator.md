## Bitwise operator
  #### & (and) operator
      a & b  = c
      0 & 0  = 0
      0 & 1  = 0
      1 & 0  = 0
      1 & 1  = 1

#### | (or) operator
 - 0 | 0 = 0
 - 0 | 1 = 1
 - 1 | 0 = 1
 - 1 | 1 = 1
#### XOR operator ^ (Exclusive OR)
  - if both bit are same result 0
  - if both bit are diff result is 1
  - 0 ^ 0 = 0
  - 0 ^ 1 = 1;
  - 1 ^ 0 = 1
  - 1 ^ 1 = 0

#### NOT operator ~ 
-  ~0 = 1
- ~1 =0
#### Predict output 

```c++
#include <iostream>
using namespace std ;
int main (){
    int x= 0;
    cout<< (~x);
    return 0;
}
```
###### Output : -1

#### Binary Left shift
* a = 0000101 = 2^2 + 2^0
* b = 2
* a << b = 0010100 = 2^4 + 2^2 = 2^2*(2^2 + 2^0) = 2^b *a= a*2^b
#### Binary Right shift
* a = 0010100 = 2^4 + 2^2 
* b = 2
* a >> b = 0000101 = 2^2 + 2^0 = (2^4 + 2^2)/ 2^2 = a/2^b
### Convert Decimal to Binary 
```cpp
     #include <iostream>
using namespace std ;

int main() {
    int num;
    cout<<"Enter the binary Number : ";
    cin>>num;
    int ans=0;
    int k=31;
    while (num){
        ans = 10*ans + (num&1);
        num >>=1;
    }
    cout<<"ans : "<<ans<<endl;
    return 0;
}
```



#### Bitmasking
1. [Even odd number]()
  - a&1 =1 --> odd
  - a&1 =0 --> even
2. [get ith bit]()
  - a&(1<< i)
  - i should be less than 31 in int datatype
3. [set ith bit]()
   - set means to be 1
   - a |= (1<< i)
   - i should be less than 31 in int datatype
4. [clear ith bit]()
   - clear means to be 0
   - a &= ~(1<< i)
   - i should be less than 31 in int datatype
5. [Clear last(right) ith bit]()
   - num &= (~0 << i)
6. [Clear  range of bits (i,j,right)]()
   -   mask1 = (-1 << i)
   -   mask2 = ~ (-1 << j) or (1<< i) -1
   -   mask  =  mask1 | mask2;
   -   num &= mask
7. [Count set Bit]() 
   - & operation with 1 
   - left shift with 1
8. [Count Bits hack]()
   - ###### remove last bit n= n&(n-1)

#### Matching Substring between two number :- 
 1.   You are given two 32-bits numbers , N and M , and two bit positions i and j.
   write a method to set between i and j in N equal to M. 
   M (becomes a sunstrings of N located at and starting at j).
   Exaple : 
   N= 10000000000
   M= 10101
   i= 6, j=2
   Output : 1001010100
#### [Solution]()
2. #### Power of 2
    - if n& (n-1) ==0 then it is a power of two
    - the no. of zeros bits is even

