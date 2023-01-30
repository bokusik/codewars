#include <string>
using namespace std;

string rot13(string msg)
{
  int z = msg.length(), i=0;                
        for(i=0; i<=(z); i++)                                   //Rot13 Algorithm
        {
                if(msg[i] < 91 && msg[i] > 64)              //uppercase
                {
                        if(msg[i] < 78)
                                msg[i] = msg[i] + 13;
                        else
                        msg[i] = msg[i] - 13;
                }
                if(msg[i] < 123 && msg[i] > 96)     //lowercase
                {
                        if(msg[i] < 110)
                                msg[i] = msg[i] + 13;
                        else
                                msg[i] = msg[i] - 13;
                }
        }
        return msg;          
}