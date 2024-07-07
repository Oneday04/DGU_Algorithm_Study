#include <stdio.h>

long long total, mid, n, m, result, max = 0;

void	binary_search(long long arr[n], int left, int right) {
	if (left > right)
		return ;
	total = 0; 
	mid = (left + right) / 2;
	
 // mid 보다 초과된 길이, 잘랐을 때 가져가는 나무 길이
	for(int i = 0; i < n; i++) {
		if (arr[i] > mid) 
			total += arr[i] - mid;
	}
	
    // 더 잘라야(필요) 할 때
	if (total < m)
		binary_search(arr, left, mid - 1);
		
    // 덜 자르거나 적당할 때
	else {
		result = mid;    //최대한 덜 잘랐을 때가 원하는 값
		binary_search(arr, mid + 1, right);
	}
}

int main(void) {
	scanf("%lld %lld", &n, &m);
	long long	trees[n];

	// 나무 높이 저장
	for(int i = 0; i < n; i++) {
		scanf("%lld", &trees[i]);
		if (max < trees[i])
			max = trees[i];
	}
	//함수 호출
	binary_search(trees, 0, max);
	printf("%lld", result);
	
	return (0);
}
