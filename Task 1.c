{
	class Program
    {
    	static void Main()
    	{
        	int sum;
            sum = 0;
            
            for (int i = 0; i < 1000; i++)
            {
            	if (i%3 == 0)
                sum = sum + i;
            }
            for (int i = 0; i < 1000; i++)

            	if (i%5 == 0)
                sum = sum + i;
            }
            System.Console:Write("The sum of all the multiples of 3 or 5 below 1000: " + sum);
            System.Console.WriteLine();

        }
    }
}