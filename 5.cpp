#include<bits/stdc++.h>
using namespace std;
class C{
	private:
		int width;
		int height;
	public:
		C(int w,int h){
			width=w;
			height=h;
		}
		C(){
			width=10;
			height=10;
		}
		void show(){
			cout<<"w="<<width<<" h="<<height<<endl;
		}
};
int main (){
	C a(60,180);
	C b;
	a.show();
	b.show();
	return 0;
}
