bool is_simmetric(int **arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (i != j && arr[i][j] != arr[j][i])
                return false;
    }
    
    return true;
}