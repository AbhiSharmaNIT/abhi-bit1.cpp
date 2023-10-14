/*Ques:- write a program to find a unique number in the array 
where all number except one, are present twice ?*/
// #include<iostream>
// using namespace std;

// int bit(int a[],int n)
// {
//     int firstBit = 0;
//     for (int i = 0; i < n; i++)
//     {
//         firstBit = firstBit^a[i];
//     }
//     return firstBit;
// }
// int main()
// {
//     int a[] = {1,3,2,4,3,1,2,4,5};
//     cout<<bit(a,9);     
// }


//Ques:- Write a program to check if a given number is power of 2 or not ?
// n=8 => 1000 and n-1 = 7 => 0111 (& operator just like multiplication)
// n&n-1 = 0000 for all number whoes are power of 2
// !0000 = 1000 

// if last bit and first bit are same then get true value else false value
// #include<iostream>
// using namespace std;

// bool powerof2(int n)
// {
//     return (n && !(n&(n-1)));
// }
// int main()
// {
//     cout<<powerof2(16)<<endl; //Here 16 is power of 2 so output 1 we got,
//     cout<<powerof2(15);    //Here 15 is not power of 2 so output 0 we got.   
// }


/*Ques:- Write a program to count the number of ones 
  in binaray representation on a number ?*/

// #include<iostream>
// using namespace std;

// int onesfind(int n)
// {
//     int count = 0;
//     while (n>0)
//     {
//         n = n&(n-1);   
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     cout<<onesfind(19);
// }
