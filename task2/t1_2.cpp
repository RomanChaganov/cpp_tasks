static int pow(int base, int exponent)
{
    int result = 1;
    if (exponent < 0)
    {
        base = 1 / base;
        exponent = -exponent;
    }
    
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    
    return result;
}

static int binary_to_decimal(int binary)
{
    int decimal = 0;
    int power = 0;
    
    while (binary > 0)
    {
        int remainder = binary % 10;
        decimal += remainder * pow(2, power);
        binary /= 10;
        power++;
    }
    
    return decimal;
}

void swap_binary(int arr[], int size)
{
    if (size == 0) return;
    
    int min_idx = 0;
    int max_idx = 0;
    int min = binary_to_decimal(arr[0]);
    int max = min;
    
    for (int i = 0; i < size; i++)
    {
        int decimal = binary_to_decimal(arr[i]);
        
        if (decimal < min) 
        {
            min_idx = i;
            min = decimal;
        }
        
        if (decimal > max)
        {
            max_idx = i;
            max = decimal;
        }
    }
    
    int x = arr[min_idx];
    arr[min_idx] = arr[max_idx];
    arr[max_idx] = x;
}