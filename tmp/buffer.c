/**
 * sendbuf - Send data to the buffer for future impress
 * @toprint: Pointer to the buffer to use
 * @c: character to impress
 */
void sendbuf(buf *toprint, char c)
{
	toprint->alm[toprint->pos] = c;
	toprint->pos += 1;
	printBuffer(toprint);
}


/**
 * createBuf - Create a buffer of the size specificated
 * @size: Length of the buffer
 */
buf *createBuf()
{
	buf *newBuffer = malloc(sizeof(buf));
	if (!newBuffer)
		exit(100);
	newBuffer->alm = malloc(1024);
	if (!(newBuffer->alm))
	{
		free(newBuffer)
		exit(100);
	}
	return(ptr);
}


/**
 * printBuffer - Print the buffer to the standart output
 * @toprint: Pointer to the buffer
 */
void printBuffer(buf *toprint)
{
	write(1, toprint->alm, toprint->pos);
	toprint->pos = 0;
}
