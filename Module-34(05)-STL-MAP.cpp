#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>mp;
    //insert O(logn);

    mp["goru"] = 1;
    mp["chagol"] = 2;
    mp["vera"] = 3;

    //value of a key
    // complexity O(logn)
    cout<<"Value of a key : \n";
    cout<<mp["goru"]<<"\n";
    cout<<mp["vera"]<<"\n";


    mp["cat"] = 2;
    cout<<mp["cat"]<<"\n";


     mp["cat"] = 5;
    cout<<mp["cat"]<<"\n";


   // print the map
   for(auto it:mp)
   {
       cout<<"Key :"<<it.first<<" ,Value :"<<it.second<<"\n";

   }
   //size of map  mp -O(1)
   cout<<"Size of map        "<< mp.size()<<"\n";

   cout<<endl<<endl<<endl<<endl;
   cout<<"Print Map 2 \n ";
   map<int,int>mp2;
   mp2[69] = 1;
   mp2[57] = 4;
   mp2[89] = 4;

   mp2[10000000] = 10;
for(auto it:mp2)
{
    cout<<"key :" <<it.first<<"    ,  value : " <<it.second<<"\n";
}


//size of map  mp2 -O(1)
   cout<<"Size of map2      "<<mp2.size()<<"\n";
    return 0;

}
