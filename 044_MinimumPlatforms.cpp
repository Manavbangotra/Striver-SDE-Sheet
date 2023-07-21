//gfg
int findPlatform(int arr[], int dep[], int n)
{
    sort(arr, arr + n);
    sort(dep, dep + n);

    int pltNeeded = 1, result = 1;
    int i = 1, j = 0;

    while (i < n && j < n) {
        if (arr[i] <= dep[j]) {
            pltNeeded++;
            i++;
        } else if (arr[i] > dep[j]) {
            pltNeeded--;
            j++;
        }
        result = max(result, pltNeeded);
    }

    return result;
}
