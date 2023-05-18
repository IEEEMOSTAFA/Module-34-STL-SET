    #include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>a;

    // Insert complexity O(logn) <<
    a.insert(5);
    a.insert(7);
    a.insert(4);
    a.insert(3);
    a.insert(4);
    a.insert(7);

//print O(n)
    cout<<"Printing  the multiSet \n";

   for(auto it:a )
    cout<<it<<" ";

    cout<<"\n";
      cout<<" Size of MultiSet Size : ";
    cout<<a.size()<<"\n";

//erase  complexity O(logn)
//erase all occarance
a.erase(4);
cout<<"Printing  the multiSet after erasing  4 \n";
for(auto it: a)
    cout<<it<<" ";
cout<<"\n";

//erase a single occarance
a.erase(a.find(7));
cout<<"Printing  the multiSet after erasing  7 \n";
for(auto it: a)
    cout<<it<<" ";
cout<<"\n";

//find O(logn)
if(a.find(5) != a.end())
{
    cout<<"4 Exists \n";
}
else
{
    cout<<"4 doesn't exit \n";
}
return 0;



}

