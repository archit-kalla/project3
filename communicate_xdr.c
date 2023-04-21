/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "communicate.h"

bool_t
xdr_file (XDR *xdrs, file *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->name, 120,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->size))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->id))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_FileList (XDR *xdrs, FileList *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->files, 50,
		sizeof (file), (xdrproc_t) xdr_file))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_Node (XDR *xdrs, Node *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->ip, 120,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->load))
		 return FALSE;
	 if (!xdr_FileList (xdrs, &objp->files))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_NodeList (XDR *xdrs, NodeList *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->nodes, 50,
		sizeof (Node), (xdrproc_t) xdr_Node))
		 return FALSE;
	return TRUE;
}
