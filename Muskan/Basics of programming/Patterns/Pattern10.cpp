#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

   int stars=1;
   int spaces=n/2;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=spaces;j++){
           cout<<"\t";
       }
        for(int j=1;j<=stars;j++){
            if(j==1||j==stars)
              cout<<"*\t";
              else{
                  cout<<"\t";
              }
       }
       cout<<endl;
       if(i<=n/2){
           spaces--;
           stars+=2;
       }
       else{
           spaces++;
           stars-=2;
       }
   }
}
