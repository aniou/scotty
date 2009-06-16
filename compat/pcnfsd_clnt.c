/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <rpc/rpc.h>

#if !defined(__WIN32__) && !defined(_WIN32)
#include <sys/time.h>
#endif
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
	static char res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD_NULL, xdr_void, argp, xdr_void, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return ((void *)&res);
}

auth_results *
pcnfsd_auth_1(argp, clnt)
	auth_args *argp;
	CLIENT *clnt;
{
	static auth_results res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD_AUTH, xdr_auth_args, argp, xdr_auth_results, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

pr_init_results *
pcnfsd_pr_init_1(argp, clnt)
	pr_init_args *argp;
	CLIENT *clnt;
{
	static pr_init_results res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD_PR_INIT, xdr_pr_init_args, argp, xdr_pr_init_results, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

pr_start_results *
pcnfsd_pr_start_1(argp, clnt)
	pr_start_args *argp;
	CLIENT *clnt;
{
	static pr_start_results res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD_PR_START, xdr_pr_start_args, argp, xdr_pr_start_results, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

void *
pcnfsd2_null_2(argp, clnt)
	void *argp;
	CLIENT *clnt;
{
	static char res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD2_NULL, xdr_void, argp, xdr_void, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return ((void *)&res);
}

v2_info_results *
pcnfsd2_info_2(argp, clnt)
	v2_info_args *argp;
	CLIENT *clnt;
{
	static v2_info_results res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD2_INFO, xdr_v2_info_args, argp, xdr_v2_info_results, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

v2_pr_init_results *
pcnfsd2_pr_init_2(argp, clnt)
	v2_pr_init_args *argp;
	CLIENT *clnt;
{
	static v2_pr_init_results res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD2_PR_INIT, xdr_v2_pr_init_args, argp, xdr_v2_pr_init_results, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

v2_pr_start_results *
pcnfsd2_pr_start_2(argp, clnt)
	v2_pr_start_args *argp;
	CLIENT *clnt;
{
	static v2_pr_start_results res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD2_PR_START, xdr_v2_pr_start_args, argp, xdr_v2_pr_start_results, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

v2_pr_list_results *
pcnfsd2_pr_list_2(argp, clnt)
	void *argp;
	CLIENT *clnt;
{
	static v2_pr_list_results res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD2_PR_LIST, xdr_void, argp, xdr_v2_pr_list_results, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

v2_pr_queue_results *
pcnfsd2_pr_queue_2(argp, clnt)
	v2_pr_queue_args *argp;
	CLIENT *clnt;
{
	static v2_pr_queue_results res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD2_PR_QUEUE, xdr_v2_pr_queue_args, argp, xdr_v2_pr_queue_results, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

v2_pr_status_results *
pcnfsd2_pr_status_2(argp, clnt)
	v2_pr_status_args *argp;
	CLIENT *clnt;
{
	static v2_pr_status_results res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD2_PR_STATUS, xdr_v2_pr_status_args, argp, xdr_v2_pr_status_results, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

v2_pr_cancel_results *
pcnfsd2_pr_cancel_2(argp, clnt)
	v2_pr_cancel_args *argp;
	CLIENT *clnt;
{
	static v2_pr_cancel_results res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD2_PR_CANCEL, xdr_v2_pr_cancel_args, argp, xdr_v2_pr_cancel_results, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

v2_pr_admin_results *
pcnfsd2_pr_admin_2(argp, clnt)
	v2_pr_admin_args *argp;
	CLIENT *clnt;
{
	static v2_pr_admin_results res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD2_PR_ADMIN, xdr_v2_pr_admin_args, argp, xdr_v2_pr_admin_results, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

v2_pr_requeue_results *
pcnfsd2_pr_requeue_2(argp, clnt)
	v2_pr_requeue_args *argp;
	CLIENT *clnt;
{
	static v2_pr_requeue_results res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD2_PR_REQUEUE, xdr_v2_pr_requeue_args, argp, xdr_v2_pr_requeue_results, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

v2_pr_hold_results *
pcnfsd2_pr_hold_2(argp, clnt)
	v2_pr_hold_args *argp;
	CLIENT *clnt;
{
	static v2_pr_hold_results res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD2_PR_HOLD, xdr_v2_pr_hold_args, argp, xdr_v2_pr_hold_results, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

v2_pr_release_results *
pcnfsd2_pr_release_2(argp, clnt)
	v2_pr_release_args *argp;
	CLIENT *clnt;
{
	static v2_pr_release_results res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD2_PR_RELEASE, xdr_v2_pr_release_args, argp, xdr_v2_pr_release_results, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

v2_mapid_results *
pcnfsd2_mapid_2(argp, clnt)
	v2_mapid_args *argp;
	CLIENT *clnt;
{
	static v2_mapid_results res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD2_MAPID, xdr_v2_mapid_args, argp, xdr_v2_mapid_results, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

v2_auth_results *
pcnfsd2_auth_2(argp, clnt)
	v2_auth_args *argp;
	CLIENT *clnt;
{
	static v2_auth_results res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD2_AUTH, xdr_v2_auth_args, argp, xdr_v2_auth_results, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}

v2_alert_results *
pcnfsd2_alert_2(argp, clnt)
	v2_alert_args *argp;
	CLIENT *clnt;
{
	static v2_alert_results res;

	bzero((char *)&res, sizeof(res));
	if (clnt_call(clnt, PCNFSD2_ALERT, xdr_v2_alert_args, argp, xdr_v2_alert_results, &res, TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&res);
}
