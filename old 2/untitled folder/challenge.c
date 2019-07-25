
char move_soldier (char soldier, int step)
{
	
	while (--step)
	{
		if (++soldier == ('z' + 1) || soldier == ('Z' + 1))
			soldier-= 'z' - 'a' + 1;
	}
	return (soldier);
}

char *move(char *baraks, int step)
{
	int id;
	while (baraks[++id])
	{
		if ((baraks[id] >= 'a' && baraks[id] <= 'z') || (baraks[id] >= 'A' && baraks[id] <= 'Z'))
		{
			move_soldier(baraks[id], step);
		}
	}
	return (baraks);
}
