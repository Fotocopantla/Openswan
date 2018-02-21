#include "../lp12-parentR2/parentR2_head.c"
#include "seam_kernel.c"
#include "seam_ikealg.c"
#include "seam_host_jamesjohnson.c"
#include "seam_x509.c"
#include "seam_crypt.c"
#include "seam_rsasig.c"
#include "seam_natt.c"
#include "seam_gr_sha1_group14.c"

#define TESTNAME "parentR2"

static void init_local_interface(void)
{
    init_jamesjohnson_interface();
}

static void init_fake_secrets(void)
{
    osw_load_preshared_secrets(&pluto_secrets
			       , TRUE
			       , "../samples/jj.secrets"
			       , NULL, NULL);
}

static void init_loaded(void)
{   /* nothing */ }

#include "seam_parentR2.c"
#include "../lp12-parentR2/parentR2_main.c"

 /*
 * Local Variables:
 * c-style: pluto
 * c-basic-offset: 4
 * compile-command: "make check"
 * End:
 */
