#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    st.insert(5);// insert complexity O(logn)
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);

    cout<<"Printing Set \n";// print complexity O(n)
    for(auto i:st)
        cout<<i<<" ";
    cout<<"\n";
      cout<<"Set Size : ";//size complexity O(1)
    cout<<st.size()<<"\n";

    /*
    for(auto it=st.begin(); it!= st.end(); it++)   //Eta o print korar way .kinto etate jamela ace tai avoid korbo ei poddoti ta.
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
*/

//Erase function::delete an special element
//Erase complexity O(logn)   >>>n=number of element currently in set;
st.erase(5);
cout<<"printing ser after erasing 5 \n ";
for(auto i:st)
        cout<<i<<" ";
    cout<<"\n";

    st.erase(8);
cout<<"printing ser after erasing 8 \n ";
for(auto i:st)
        cout<<i<<" ";
    cout<<"\n";


    //Find function::Ekta element set a ace ki nei seta test kore >>element takle true return korbe.Na takle false return korbe
    //Find  >>Complexity O(logn)

    if(st.find(7) != st.end())
    {
        cout<<"7 found \n ";
    }
    else
    {
        cout<<" 7 not found \n";
    }



    return 0;
}

