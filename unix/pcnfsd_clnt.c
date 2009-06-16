/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "pcnfsd.h"
#if RPC_SVC
 void msg_out(msg) char *msg; {_msgout(msg);}
#endif
#if RPC_HDR
 extern void msg_out();
#endif

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

void *
pcnfsd_null_1(argp, clnt)
	void *argp;
	CLIENT *clnt;
{
	static char clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD_NULL,
		(xdrproc_t) xdr_void, (caddr_t) argp,
		(xdrproc_t) xdr_void, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return ((void *)&clnt_res);
}

auth_results *
pcnfsd_auth_1(argp, clnt)
	auth_args *argp;
	CLIENT *clnt;
{
	static auth_results clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD_AUTH,
		(xdrproc_t) xdr_auth_args, (caddr_t) argp,
		(xdrproc_t) xdr_auth_results, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

pr_init_results *
pcnfsd_pr_init_1(argp, clnt)
	pr_init_args *argp;
	CLIENT *clnt;
{
	static pr_init_results clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD_PR_INIT,
		(xdrproc_t) xdr_pr_init_args, (caddr_t) argp,
		(xdrproc_t) xdr_pr_init_results, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

pr_start_results *
pcnfsd_pr_start_1(argp, clnt)
	pr_start_args *argp;
	CLIENT *clnt;
{
	static pr_start_results clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD_PR_START,
		(xdrproc_t) xdr_pr_start_args, (caddr_t) argp,
		(xdrproc_t) xdr_pr_start_results, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

void *
pcnfsd2_null_2(argp, clnt)
	void *argp;
	CLIENT *clnt;
{
	static char clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD2_NULL,
		(xdrproc_t) xdr_void, (caddr_t) argp,
		(xdrproc_t) xdr_void, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return ((void *)&clnt_res);
}

v2_info_results *
pcnfsd2_info_2(argp, clnt)
	v2_info_args *argp;
	CLIENT *clnt;
{
	static v2_info_results clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD2_INFO,
		(xdrproc_t) xdr_v2_info_args, (caddr_t) argp,
		(xdrproc_t) xdr_v2_info_results, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

v2_pr_init_results *
pcnfsd2_pr_init_2(argp, clnt)
	v2_pr_init_args *argp;
	CLIENT *clnt;
{
	static v2_pr_init_results clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD2_PR_INIT,
		(xdrproc_t) xdr_v2_pr_init_args, (caddr_t) argp,
		(xdrproc_t) xdr_v2_pr_init_results, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

v2_pr_start_results *
pcnfsd2_pr_start_2(argp, clnt)
	v2_pr_start_args *argp;
	CLIENT *clnt;
{
	static v2_pr_start_results clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD2_PR_START,
		(xdrproc_t) xdr_v2_pr_start_args, (caddr_t) argp,
		(xdrproc_t) xdr_v2_pr_start_results, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

v2_pr_list_results *
pcnfsd2_pr_list_2(argp, clnt)
	void *argp;
	CLIENT *clnt;
{
	static v2_pr_list_results clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD2_PR_LIST,
		(xdrproc_t) xdr_void, (caddr_t) argp,
		(xdrproc_t) xdr_v2_pr_list_results, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

v2_pr_queue_results *
pcnfsd2_pr_queue_2(argp, clnt)
	v2_pr_queue_args *argp;
	CLIENT *clnt;
{
	static v2_pr_queue_results clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD2_PR_QUEUE,
		(xdrproc_t) xdr_v2_pr_queue_args, (caddr_t) argp,
		(xdrproc_t) xdr_v2_pr_queue_results, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

v2_pr_status_results *
pcnfsd2_pr_status_2(argp, clnt)
	v2_pr_status_args *argp;
	CLIENT *clnt;
{
	static v2_pr_status_results clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD2_PR_STATUS,
		(xdrproc_t) xdr_v2_pr_status_args, (caddr_t) argp,
		(xdrproc_t) xdr_v2_pr_status_results, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

v2_pr_cancel_results *
pcnfsd2_pr_cancel_2(argp, clnt)
	v2_pr_cancel_args *argp;
	CLIENT *clnt;
{
	static v2_pr_cancel_results clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD2_PR_CANCEL,
		(xdrproc_t) xdr_v2_pr_cancel_args, (caddr_t) argp,
		(xdrproc_t) xdr_v2_pr_cancel_results, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

v2_pr_admin_results *
pcnfsd2_pr_admin_2(argp, clnt)
	v2_pr_admin_args *argp;
	CLIENT *clnt;
{
	static v2_pr_admin_results clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD2_PR_ADMIN,
		(xdrproc_t) xdr_v2_pr_admin_args, (caddr_t) argp,
		(xdrproc_t) xdr_v2_pr_admin_results, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

v2_pr_requeue_results *
pcnfsd2_pr_requeue_2(argp, clnt)
	v2_pr_requeue_args *argp;
	CLIENT *clnt;
{
	static v2_pr_requeue_results clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD2_PR_REQUEUE,
		(xdrproc_t) xdr_v2_pr_requeue_args, (caddr_t) argp,
		(xdrproc_t) xdr_v2_pr_requeue_results, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

v2_pr_hold_results *
pcnfsd2_pr_hold_2(argp, clnt)
	v2_pr_hold_args *argp;
	CLIENT *clnt;
{
	static v2_pr_hold_results clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD2_PR_HOLD,
		(xdrproc_t) xdr_v2_pr_hold_args, (caddr_t) argp,
		(xdrproc_t) xdr_v2_pr_hold_results, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

v2_pr_release_results *
pcnfsd2_pr_release_2(argp, clnt)
	v2_pr_release_args *argp;
	CLIENT *clnt;
{
	static v2_pr_release_results clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD2_PR_RELEASE,
		(xdrproc_t) xdr_v2_pr_release_args, (caddr_t) argp,
		(xdrproc_t) xdr_v2_pr_release_results, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

v2_mapid_results *
pcnfsd2_mapid_2(argp, clnt)
	v2_mapid_args *argp;
	CLIENT *clnt;
{
	static v2_mapid_results clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD2_MAPID,
		(xdrproc_t) xdr_v2_mapid_args, (caddr_t) argp,
		(xdrproc_t) xdr_v2_mapid_results, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

v2_auth_results *
pcnfsd2_auth_2(argp, clnt)
	v2_auth_args *argp;
	CLIENT *clnt;
{
	static v2_auth_results clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD2_AUTH,
		(xdrproc_t) xdr_v2_auth_args, (caddr_t) argp,
		(xdrproc_t) xdr_v2_auth_results, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

v2_alert_results *
pcnfsd2_alert_2(argp, clnt)
	v2_alert_args *argp;
	CLIENT *clnt;
{
	static v2_alert_results clnt_res;

	memset((char *)&clnt_res, 0, sizeof (clnt_res));
	if (clnt_call(clnt, PCNFSD2_ALERT,
		(xdrproc_t) xdr_v2_alert_args, (caddr_t) argp,
		(xdrproc_t) xdr_v2_alert_results, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
