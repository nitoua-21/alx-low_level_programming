/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to a char.
 * @to: Pointer to a char whose value will be assigned to s.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

