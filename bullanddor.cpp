#include <iostream>
using namespace std;

class BullandDor {
 public:
    string Name;
    int Goals;
    int Assists;
    int Trophies;
    BullandDor (string aName, int aGoals, int aAssists, int aTrophies) {
          Name = aName;
          Goals = aGoals;
          Assists = aAssists;
          Trophies = aTrophies;
          }

          bool hasBullandDor (){
          if (Goals > 30  && Trophies > 4) {
            return true;
          }
            return false;
          }
};



int main()
{
    BullandDor Num1("messi", 22, 25, 0);
    BullandDor Num2("lewandoski", 50, 21, 5);
    BullandDor Num3("kevin", 16, 30, 1);
    BullandDor Num4("benzema", 30, 10, 2);
    BullandDor Num5("rashford", 22, 15, 0);

    cout << Num2.hasBullandDor();

    return 0;
}
