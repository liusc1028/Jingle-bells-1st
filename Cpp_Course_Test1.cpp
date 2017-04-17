#include <iostream>
using namespace std;

class TestA
{
public:
    TestA(int v):val(v){cout<<"Construct "<<v<<endl;}
    TestA(TestA &ins){this->val = ins.val; cout<<"Copy Constructor "<<val<<endl;}
    ~TestA(){cout<<"Distruct"<<val<<endl;}
    void changeVal(int newValue){this->val = newValue;}
    void printVal(){cout<<"Value = "<<val<<endl;}
private:
    int val;
};

//a comment test added
TestA changeValue(TestA insA, int x)
{
    TestA insB(x+1);
    insA.changeVal(x-1);
    return insB;
}

int main(int argc, const char * argv[]) {
    TestA insA(5);
    TestA insC(0);
    insC = changeValue(insA, 3);
    //TestA insD(insC);
    insA.printVal();
    insC.printVal();
    // add a test comment after pull request and before merge
    return 0;
}
