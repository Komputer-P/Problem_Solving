/*
BOJ 1016腰: 薦咽 いい 呪

獣娃 薦廃: 2段
五乞軒 薦廃: 512 MB

庚薦
嬢恐 呪 X亜 1左陥 笛 薦咽呪稽 蟹刊嬢 恭嬢走走 省聖 凶, 薦咽いい呪虞壱 廃陥. 薦咽呪澗 舛呪税 薦咽戚陥. min引 max亜 爽嬢走檎, min引 max研 匂敗廃 紫戚拭 薦咽いい呪亜 護 鯵 赤澗走 窒径廃陥.

脊径
湛属 匝拭 砧 舛呪 min引 max亜 爽嬢遭陥.

窒径
湛属 匝拭 [min,max]姥娃拭 薦咽いい呪亜 護 鯵昔走 窒径廃陥. 
*/

//#define _CRT_SECURE_NO_WARNINGS

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

ull Min, Max;
int cnt;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> Min >> Max;

	vector<bool> sieve(Max - Min + 1, true);
	ull i = 2;

	while (i * i <= Max)
	{
		ull fDivNum = Min / (i * i);
		if (Min % (i * i) != 0)
			fDivNum++;

		while (fDivNum * (i * i) <= Max)
		{
			if (sieve[fDivNum * (i * i) - Min])
				sieve[fDivNum * (i * i) - Min] = false;
			fDivNum++;
		}
		i++;
	}

	for (int i = 0; i < sieve.size(); i++)
	{
		if (sieve[i])
			cnt++;
	}

	cout << cnt;
}

/*
拭虞塘什砺革什税 端税 誓遂: 社呪人 社呪税 壕呪研 杏君鎧澗 依戚 焼観, 薦咽呪税 壕呪研 杏君鎧澗 端

memset sieve true //true: 薦咽 いい呪

ull i = 2 (i澗 薦咽呪 獣拙繊)
拭虞塘什砺革什税 端税 誓遂:
while  i * i <= max //薦咽呪亜 max 戚馬析凶 (拭虞塘什砺革什税 端 湛腰�� for庚)
	
	//min~max 骨是 鎧拭辞 坦製生稽 薦咽呪拭惟 蟹患澗 葵税 交 達奄 -> 奄糎 拭虞塘什砺革什税 端坦軍 坦製(1)採斗 壱形馬澗 依戚 焼観, 骨是 照税 葵 幻聖 壱形馬奄 是敗  
	ull fDivNum = min / (i * i)
	if min % (i * i) != 0 //min左陥 拙聖 (骨是 鉱析 凶)
		fDivNum++ //交+1 背辞 交 衣舛

	while fDivNum * (i*i) <= max //坦製生稽 薦咽呪拭惟 蟹患澗 葵採斗 戚 葵税 壕呪 穿採 false (拭虞塘什砺革什税 端 砧腰�� for庚)
		if sieve[fDivNum * (i*i)-min] == true //薦咽呪稽 蟹感 呪亜 焼艦檎 (false戚檎 skip)
			sieve[fDivNum * (i*i)-min] = false
		fDivNum++
	
	i++

for sieve
	if sieve true
		cnt++

ans cnt
*/
