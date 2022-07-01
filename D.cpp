#include <iostream>

int main() {
	int t,a,b,x,c,m,h;
	char d;
	for (std::cin>>t; t--; std::cout<<c<<d) {
		c=0;
		std::cin>>a>>d>>b>>x;
		h=a;
		m=b;
		d=10;
		do {
			m+=x;
			h+=m/60;
			m%=60;
			h%=24;
			c+=h/d==m%d&m/d==h%d;
		} while (h-a|m-b);
	}
}
