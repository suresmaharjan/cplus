#include <iostream>
using namespace std;

class Test{
    private:
    public:
        double x=666;
        int y;
        void getData(){
            cout << y;
        }

        void setData(int z) ;
};
void Test :: setData(int z){
    y=z;
}
int main(){
    Test lorem;
      lorem.setData(8899);
      lorem.getData();
    return 0;
}