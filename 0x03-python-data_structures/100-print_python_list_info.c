#include <Python.h>
#include <object.h>
#include <listobject.h>

/**
 * print_python_list_info - Print list info about Python
 *
 * @p: Pyobjext pointer
 *
 * Return: void
 */

void print_python_list_info(PyObject *p)
{
	Py_ssize_t num;
	Py_ssize_t len = PyList_Size(p);
	PyListObject *pObj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", len);
	printf("[*] Allocated = %ld\n", pObj->allocated);

	for (num = 0; num < len; num++)
	{
		printf("Element %ld: %s\n", num, Py_TYPE(pObj->ob_item[num])->tp_name);
	}
}
