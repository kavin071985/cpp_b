#include<iostream>
#include<cstring>
#include<string>

using namespace std;


class Log
{
  private :
            bool flagErr = false;
            bool flagWar = false;
            bool flagSuccess = true;
  public :
          Log(bool fe,bool fm, bool fs):flagErr(fe),flagWar(fm),flagSuccess(fs){}

            string getflagErr() const {return "Sorry there is some issue in computation";}
            bool getflagWar() const {return flagWar;}
            bool getflagSuccess() const {return flagSuccess;}
};

class StringComputations
{
  private :
           string inputStr;
            string refresh = inputStr;
           StringComputations(){}
           static StringComputations s_instace;
  public :
            static stringComputations& Get(string str)
            {
              inputStr= str;
              return s_instace;
            }
            
            void stringAppend (const string& str)
            {
                cout <<inputStr.append(str)<< endl;
            }
            void stringAssign ( short n)
            {
              cout << inputStr.assign(inputStr,n) << endl;
            }
            void stringAt ()
            {
              for (unsigned i=0; i<inputStr.length(); ++i)
                 {
                      std::cout << inputStr.at(i);
                  }
            }
            void stringCapacity()
            {
              cout << "capacity: " << inputStr.capacity()<< endl;
            }
            void  stringFind(const char str)
            {  
              size_t found = inputStr.find(str);
              if (found!=std::string::npos) 
              {
                  std::cout << "first"<<str<< "found at: " << found << endl;
              }
            }  
            void stringErase(short n, short s)
              {
                  inputStr.erase (n,s);
                 std::cout << inputStr << '\n';
              }
            void stringEmpty()
            {
                  std::string content;
                  std::string line;
                  std::cout << "Please introduce a text. Enter an empty line to finish:\n";
                  do {
                    getline(std::cin,line);
                    content += line + '\n';
                  } while (!line.empty());
                  std::cout << "The text you introduced was:\n" << content;
                  
            }
            void pushBack()
            {
                inputStr.push_back('a');
              std::cout << inputStr <<std::endl;

            }
            void refreshFunc()
            {
                inputStr = refresh;
            }
};
    
int main()
{


  
  StringComputations::Get("Dipayan&Kavin").refreshFunc();
  StringComputations::Get("Dipayan&Kavin").stringAppend("playing");
  StringComputations::Get("Dipayan&Kavin").refreshFunc();
  StringComputations::Get("Dipayan&Kavin").stringAssign(3);
  StringComputations::Get("Dipayan&Kavin").refreshFunc();
  StringComputations::Get("Dipayan&Kavin").stringAt();
  StringComputations::Get("Dipayan&Kavin").refreshFunc();
  StringComputations::Get("Dipayan&Kavin").stringCapacity();
  StringComputations::Get("Dipayan&Kavin").stringFind('&');
  StringComputations::Get("Dipayan&Kavin").refreshFunc();
  StringComputations::Get("Dipayan&Kavin").stringErase(7,1);
  StringComputations::Get("Dipayan&Kavin").refreshFunc();
  //StringComputations::Get("Dipayan&Kavin").stringEmpty();
  StringComputations::Get("Dipayan&Kavin").pushBack();
  StringComputations::Get("Dipayan&Kavin").refreshFunc();
    return 0;
}
