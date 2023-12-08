#include <python.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_python_bytes - Writing a fxn that prints info about python lists
 * @p: address of pyobject struct
 *
 */

void print_python_bytes(PyObject *p)
{
	size_t w, len, size;
	char *swt;

	printf("[.] bytes object info\n");
	if (strcmp(p->ob_type->tp_name, "bytes"))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}
	size = ((PyVarObject *)p)->ob_size;
	swt = ((PyBytesObject *)p)->ob_sval;
	len =  size + 1 > 10 ? 10 : size + 1;
	printf("  size: %lu\n", size);
	printf("  trying string: %s\n", swt);
	printf("  first %lu bytes: ", len);
	for (w = 0; w < len; w++)
		printf("%02hhx%s", swt[w], w + 1 < len ? " " : "");
	printf("\n");
}

/**
 * print_python_list - prints info about python lists
 * @p: address of pyobject struct
 */
void print_python_list(PyObject *p)
{
	int w;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %lu\n", ((PyVarObject *)p)->ob_size);
	printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);
	for (w = 0; w < ((PyVarObject *)p)->ob_size; w++)
	{
		printf("Element %d: %s\n", w,
			((PyListObject *)p)->ob_item[w]->ob_type->tp_name);
		if (!strcmp(((PyListObject *)p)->ob_item[i]->ob_type->tp_name, "bytes"))
			print_python_bytes(((PyListObject *)p)->ob_item[w]);

	}
}
