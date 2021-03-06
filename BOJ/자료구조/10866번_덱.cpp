/*

BOJ 10866번: 덱

시간 제한: 0.5초 (추가 시간 없음)
메모리 제한: 256 MB

문제
정수를 저장하는 덱(Deque)를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 여덟 가지이다.
push_front X: 정수 X를 덱의 앞에 넣는다.
push_back X: 정수 X를 덱의 뒤에 넣는다.
pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 덱에 들어있는 정수의 개수를 출력한다.
empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.

입력
첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 10,000)이 주어진다. 둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다. 주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다. 문제에 나와있지 않은 명령이 주어지는 경우는 없다.

출력
출력해야하는 명령이 주어질 때마다, 한 줄에 하나씩 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <list>
#include <cstring>

using namespace std;

char command[11];
int input_num;
int n;

list<int> List;

void push_front(int num)
{
	List.push_front(num);
}

void push_back(int num)
{
	List.push_back(num);
}

void pop_front()
{
	if (List.empty())
		printf("-1\n");
	else
	{
		printf("%d\n", List.front());
		List.pop_front();
	}
}

void pop_back()
{
	if (List.empty())
		printf("-1\n");
	else
	{
		printf("%d\n", List.back());
		List.pop_back();
	}
}

void size()
{
	printf("%d\n", List.size());
}

void empty()
{
	if (List.empty())
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
}

void front()
{
	if (!List.empty())
	{
		printf("%d\n",List.front());
	}
	else
	{
		printf("-1\n");
	}
}

void back()
{
	if (!List.empty())
	{
		printf("%d\n", List.back());
	}
	else
	{
		printf("-1\n");
	}
}

int main(void)
{
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		scanf("%s", command);

		if (!strncmp(command, "push_front", 10))
		{
			scanf("%d", &input_num);
			push_front(input_num);
		}
		else if (!strncmp(command, "push_back", 9))
		{
			scanf("%d", &input_num);
			push_back(input_num);
		}
		else if (!strncmp(command, "pop_front", 9))
		{
			pop_front();
		}
		else if (!strncmp(command, "pop_back", 9))
		{
			pop_back();
		}
		else if (!strncmp(command, "size", 4))
		{
			size();
		}
		else if (!strncmp(command, "empty", 5))
		{
			empty();
		}
		else if(!strncmp(command, "front", 5))
		{
			front();
		}
		else
		{
			back();
		}
	}

}

/*

*/
