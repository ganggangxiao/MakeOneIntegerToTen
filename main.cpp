// 仅能用于Windows系统
#include<iostream>//cout、cerr、cin等io操作
using std::cout;
using std::cerr;
using std::cin;
using std::endl;

#include<windows.h>//Sleep函数


int main(){

	system("chcp 65001");
	// 设置编码为UTF-8
	// 避免乱码

	int a;
	// 创建个数
	cout<<"输入个数:";
	cin>>a;
	// 让用户输入这个数


	a == 10 ? cout<<"a=10\n" : cout<<"a!=10\n";
	// 三目运算，判断这个数是不是10，是就输出等于10，否就输出不等于10

	// 如果不等于10，那就自增到10
	// 一个一个地增
	if(a!=10){
		cout<<"加载中..."<<endl;
		// 《加载中》

		// 所谓睡眠时间
		int sleepTime=1234;
		// windows.h里边那个Sleep，计时单位是毫秒


		//大于10，a怎么着
		if(a>10){

			// 先递增一个
			do{
				a--;
				Sleep(sleepTime);
				// 睡一会，让用户觉得是在加载
			}while(a!=10);
			// 判断一下等不等于10，等于就继续，不等于回到do{}
			// do while直接;
		}


		// 小于10，a怎么着
		if(a<10){

			// 递增一下
			do{
				a++;
				Sleep(sleepTime);
			}

			//现在等于10了不
			while(a!=10);
			// 等于10继续，不等于回到do{}
		}
	}
	
	
	cout<<"虽然不是同一个时间";Sleep(500);
	cout<<"但却是同一个地点";Sleep(500);
	cout<<"\n这个a它终于等于"<<a<<"了！"<<endl;
	// a是多少

	Sleep(1234);
	cout<<"回复任意并回车以退出此程序"<<endl;
	cout<<"退出程序后要先关掉命令行再使用其他软件,避免本UTF8编码软件引起异编码软件乱码问题"<<endl;Sleep(500);
  std::string quitValue = "nothing";
	cin>>quitValue;Sleep(500);

	cerr<<"程序圆满结束，感谢您的使用"<<endl;Sleep(500);
	cerr<<"quitValue="<<quitValue<<endl;Sleep(500);
	return 0;
}
