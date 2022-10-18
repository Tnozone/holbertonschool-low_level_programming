/**
 * prime - fonction qui va chercher si n est un nombre premier
 * @n: variable a verifie
 * @i: nombre qui teste
 * Return: si nombre premier (1) sinon (0)
 */

int prime(int n, int i)
{
if (n <= 1 || n % i == 0)
{
return (0);
}

else if (n == i)
{
return (1);
}

else if (n > i)
{
prime(n, i + 1);
}

return (1);
}

/**
 * is_prime_number - Entry point
 * @n: variable a verifie
 * Return: (prime)
 */

int is_prime_number(int n)
{
return (prime(n, 2));
}
