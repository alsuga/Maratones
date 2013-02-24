#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int x,y,z,xx,yy,zz,casos=0,test,cuad, tx,ty,tz,txx,tyy,tzz;
	scanf("%i",&test);
	while(test--){
		scanf("%i",&cuad);
		cuad--;
		scanf("%i %i %i %i %i %i",&x,&y,&z,&xx,&yy,&zz);
		while(cuad--){
			scanf("%i %i %i %i %i %i",&tx,&ty,&tz,&txx,&tyy,&tzz);
			if(tx > x) x = tx;
			if(ty > y) y = ty;
			if(tz > z) z = tz;
			if(txx < xx) xx = txx;
			if(tyy < yy) yy = tyy;
			if(tzz < zz) zz = tzz;
		}
		int out = (xx - x) * (yy - y) * (zz - z);
		if(out < 0) out = 0;
		printf("Case %i: %i\n",++casos,out);
	}
	return 0;
}