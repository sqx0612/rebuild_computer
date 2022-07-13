//#include <iostream>
//using namespace std;
//
//int main() 
//{
//	cout << "Good morning!" << endl;
//	return 0;
//}

//#include <cstdlib>
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout <<"I am a student" << endl ;
//	system("pause");
//	return 0;
//}

//#include <iostream>	//预编译命令	主要是来引用输入流cin和输出流cout
//#include <cmath>	//预编译命令	数学公式
//using namespace std;//使用名字空间命名	为避免同名冲突而引入的 
//
//int main()		//主函数
//{				//主函数开始
//	//计算三角函数式并输出
//	cout<<	sin(20.0/180.0*3.1415926)+
//			cos(20.0/180.0*3.1415926)-
//			cos(10.0/180.0*3.1415926)/
//			tan(10.0/180.0*3.1415926)
//		<<endl;
//	return 0;
//	
//}				//主函数结束

//#include <iostream>
//using namespace std;
//int main()
//{
//	float applePrice =3.5;
//	float bananaPrice=4.2;
//	float appleWeight=0.0;
//	float bananaWeight =0.0;
//	float total=0.0;
//	cout<<"请输入苹果重量"<<endl;
//	cin>>appleWeight;
//	cout <<"请输入香蕉重量"<<endl;
//	cin>>bananaWeight;
//	total=applePrice*appleWeight+bananaPrice*bananaWeight;
//	cout<<"应付款"<<total<<endl;
//	return 0;
//}

//指针的定义
//#include <iostream>
//using namespace std;
//int main(){
//	
//	int akey=0,b=0;
//	int *p=NULL,*q=NULL;
//	akey=66;
//	p=&akey;
//	q=&b;
//	*q=*p;
//	cout<<"b="<<b<<endl;
//	cout<<"*q="<<*q<<endl;
//	return 0;
//}

////位运算展开泰勒公式
//#include <iostream>
//using namespace std;
//
//int main(){
//	double e =1.0,c;
//	long k =1;
//	do {
//		c=1.0;
//		for (int i =1;i<=k;i++)
//		{
//			c=c/i;
//		
//		}
//		k++;
//		e=e+c;
//	}
//	while(c>1e-10);
//	cout<<e;
//	return 0;
//}


////函数
//#include<iostream>
//#include <cmath>
//using namespace std;
//
//bool checkPrime(int);
//
//int main()
//{
//	int a;
//	cout << "请输入一个正整数a" << endl;
//	cin >> a;
//	if (checkPrime(a))
//		cout << a << "是质数" << endl;
//	else
//		cout << a << "不是质数" << endl;
//	return 0;
//}
//
//bool checkPrime(int af)
//{
//	for (int i = 2; i <= sqrt(af); i = i + 1)
//	{
//		if (af % i == 0)
//			return false;
//	}
//	return true;
//}

////2~100以内全部4n+1型的质数的数量
//#include <iostream>
//#include <cmath>
//using namespace std;
//bool IsPrime(int n)
//{
//	bool ans = true;
//	for (int c = 2; c <= n - 1; c++)
//		if (n % c == 0) {
//			ans = false;
//			break;
//		}
//	return ans;
//}
//
//int main()
//{
//	int count = 0;
//	for (int i = 2; i <= 100; i++)
//	{
//		if (!IsPrime(i)) continue;
//		if ((i - 1) % 4 != 0) continue;
//		cout << i << endl;
//		count++;
//	}
//	cout << "count=" << count << endl;
//	return 0;
//}



////指针与值的互换，三种形式
//#include <iostream>
//using namespace std;
//void swap1(int* p, int* q)
//{
//	int temp;
//	temp = *p;
//	*p = *q;
//	*q = temp;
//	cout << "子函数：*p=" << *p << "*q=" << *q << endl;
//
//}
//
//void swap2(int xc, int yc)
//{
//	int temp;
//	temp = xc;
//	xc = yc;
//	yc = temp;
//	cout << "子函数:xc=" << xc << "yc=" << yc << endl;
//
//}
//
//void swap3(int* xd, int* yd)
//{
//	int* p;
//	p = xd;
//	xd = yd;
//	yd = p;
//	cout << "子函数:*xd=" << *xd << "*yd=" << *yd << endl;
//
//}
//
//int main()
//{
//	int x, y;
//	x = 100;
//	y = 200;
//	cout << "初始值:x=" << x << "y=" << y << endl;
//	cout << endl;
//
//
//	cout << "传地址,修改指针所指的内容：swap1(&x,&y)" << endl;
//	swap1(&x, &y);
//	cout << "主函数:x=" << x << "y=" << y << endl;
//	cout << endl;
//
//	cout << "传值:swap2(x,y)" << endl;
//	swap2(x, y);
//	cout << "主函数:x=" << x << "y=" << y << endl;
//	cout << endl;
//
//	cout << "传地址:修改指针:swap3(&x,&y)" << endl;
//	swap3(&x, &y);
//	cout << "主函数:x=" << x << "y=" << y << endl;
//	cout << endl;
//
//	return 0;
//
//
//}


//
//#include <iostream>
//#include <memory>
//using namespace std;
//
//int main()
//{
//	float sheep[10];
//
//	memset(sheep, 0, sizeof(sheep));
//	float bigsheep = 0.0;
//	int bigsheepNo = 0;
//
//	for (int i = 0; i < 10; i = i + 1)
//	{
//		cout << "请输入羊的重量sheep[" << i << "]=";
//		cin >> sheep[i];
//		if (bigsheep<sheep[i])
//		{
//			bigsheep = sheep[i];
//			bigsheepNo = i;
//		}
//	}
//	cout << "最肥羊的重量为" << bigsheep << endl;
//	cout << "最肥羊的编号为" << bigsheepNo << endl;
//	return 0;
//}

//数组8代表0~7
//字符串数组8代表0~6，外加一个/0终止符


#include <iostream>
using namespace std;

int main()
{
	int a[5] = { 1,3,5,7,9 };
	int* p = NULL;
	p = a;						//p=a，代表p=&a[0]
	for (int i = 0; i < 5; i++)
	{
		cout << "a[" << i << "]=" << *p << endl;
		p++;						
	}
	return 0;
}



