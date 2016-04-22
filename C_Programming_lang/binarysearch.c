//binary search to find x in int v[].
// v should be a sorted array, increasing order
int binsearch(int x,int v[], int n){
	int low, mid, high;
	low=0;
	high=n-1;
	while(low<=high){
		mid=(low+high)/2;
		if(x<v[mid])
			high=mid-1;
		else if (x>v[mid])
			low=mid+1;
		else
			return mid;
	}
	return -1; // don't match.
}
// a better one ?might be
int binsearch2(int x, int v[], int n) {
    int low, high, mid;
    
    low = 0;
    high = n - 1;
    mid = (low+high) / 2;
    while ( low <= high && x != v[mid] ) {
        if ( x < v[mid] )
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low+high) / 2;
    }
    if ( x == v[mid] )
        return mid;
    else
        return -1;
}