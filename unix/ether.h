/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _ETHER_H_RPCGEN
#define	_ETHER_H_RPCGEN

#include <rpc/rpc.h>
#define	NBUCKETS 16
#define	NPROTOS 6
#define	HASHSIZE 256

struct ethertimeval {
	u_int tv_seconds;
	u_int tv_useconds;
};
typedef struct ethertimeval ethertimeval;

struct etherstat {
	ethertimeval e_time;
	u_int e_bytes;
	u_int e_packets;
	u_int e_bcast;
	u_int e_size[NBUCKETS];
	u_int e_proto[NPROTOS];
};
typedef struct etherstat etherstat;

struct etherhmem_node {
	int h_addr;
	u_int h_cnt;
	struct etherhmem_node *h_nxt;
};
typedef struct etherhmem_node etherhmem_node;

typedef etherhmem_node *etherhmem;

struct etheraddrs {
	ethertimeval e_time;
	u_int e_bytes;
	u_int e_packets;
	u_int e_bcast;
	etherhmem e_addrs[HASHSIZE];
};
typedef struct etheraddrs etheraddrs;

struct addrmask {
	int a_addr;
	int a_mask;
};
typedef struct addrmask addrmask;

#define	ETHERPROG ((unsigned long)(100010))
#define	ETHERVERS ((unsigned long)(1))
extern  void etherprog_1();
#define	ETHERPROC_GETDATA ((unsigned long)(1))
extern  etherstat * etherproc_getdata_1();
#define	ETHERPROC_ON ((unsigned long)(2))
extern  void * etherproc_on_1();
#define	ETHERPROC_OFF ((unsigned long)(3))
extern  void * etherproc_off_1();
#define	ETHERPROC_GETSRCDATA ((unsigned long)(4))
extern  etheraddrs * etherproc_getsrcdata_1();
#define	ETHERPROC_GETDSTDATA ((unsigned long)(5))
extern  etheraddrs * etherproc_getdstdata_1();
#define	ETHERPROC_SELECTSRC ((unsigned long)(6))
extern  void * etherproc_selectsrc_1();
#define	ETHERPROC_SELECTDST ((unsigned long)(7))
extern  void * etherproc_selectdst_1();
#define	ETHERPROC_SELECTPROTO ((unsigned long)(8))
extern  void * etherproc_selectproto_1();
#define	ETHERPROC_SELECTLNTH ((unsigned long)(9))
extern  void * etherproc_selectlnth_1();
extern int etherprog_1_freeresult();

/* the xdr functions */
extern bool_t xdr_ethertimeval();
extern bool_t xdr_etherstat();
extern bool_t xdr_etherhmem_node();
extern bool_t xdr_etherhmem();
extern bool_t xdr_etheraddrs();
extern bool_t xdr_addrmask();

#endif /* !_ETHER_H_RPCGEN */
