#include <iostream>
void print_hello()
{
    std::cout << "Hello" << std::endl;
    std::cout << "How are you" << std::endl;
}
int main(int argc,char* argv[])
{
    print_hello();
    auto f= 1.23f;
    double d=1.23;
    long double ld=1.34444444488444;

    int i=2;
    short s = 32000;
    long l = 1800000;
    long long ll=128888888888888;
    char c =0;
    auto b =false;
    std::cout << "size of float and double: " << sizeof(float)<< "," <<sizeof(double)<< std::endl;
    
    if(b)
    {
        std::cout <<  "B is true!" << std:: endl;

    }
    else if(!b)
    {
        std::cout << "b is false!" << std ::endl;
    }
    else
    {
        std::cout << "B is false:" << std::endl;
    }
//switch case
switch(i)
    {
    case 0:
        std::cout << "switch 0" << std::endl;
        break;
    case 1:
        std::cout << "switch 1" << std::endl;
        break;
    case 2:
        std::cout << "switch 2" << std::endl;
        break;
    default:
        break;
    }

    //for loop
for(unsigned int count = 0; count < 10; count++)
{
    if(count==5)continue;
    std::cout << "count is:  " << count << std::endl;
}

//range based for loop
std::string str ="Hello";
for(char character : str)
{
    std::cout << character << std::endl;
}

 //while loop
int while_count=0;
while(true)
{
    std::cout<<while_count<<std::endl;
    while_count++;
    if(while_count>=10) break;
}  
}