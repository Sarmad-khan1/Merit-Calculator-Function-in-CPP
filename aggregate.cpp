void aggregate()
{
	for (int i = 0; i < studentCount; i++)
	{
		merit[i] = ((rolls[i] / 1100 * 0.1) + (fsc[i] / 1100 * 0.6) + (ecat[i] / 400 * 0.3)) * 100;
	}
}
