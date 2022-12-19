#include <stdio.h>
#include "hocdec.h"
extern int nrnmpi_myid;
extern int nrn_nobanner_;
#if defined(__cplusplus)
extern "C" {
#endif

extern void _bias_reg(void);
extern void _cad_reg(void);
extern void _cal_reg(void);
extern void _gap_reg(void);
extern void _ipulse1_reg(void);
extern void _ka_reg(void);
extern void _kahp_reg(void);
extern void _kc_reg(void);
extern void _kdr_reg(void);
extern void _km_reg(void);
extern void _naf_reg(void);

void modl_reg() {
  if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
    fprintf(stderr, "Additional mechanisms from files\n");
    fprintf(stderr, " \"bias.mod\"");
    fprintf(stderr, " \"cad.mod\"");
    fprintf(stderr, " \"cal.mod\"");
    fprintf(stderr, " \"gap.mod\"");
    fprintf(stderr, " \"ipulse1.mod\"");
    fprintf(stderr, " \"ka.mod\"");
    fprintf(stderr, " \"kahp.mod\"");
    fprintf(stderr, " \"kc.mod\"");
    fprintf(stderr, " \"kdr.mod\"");
    fprintf(stderr, " \"km.mod\"");
    fprintf(stderr, " \"naf.mod\"");
    fprintf(stderr, "\n");
  }
  _bias_reg();
  _cad_reg();
  _cal_reg();
  _gap_reg();
  _ipulse1_reg();
  _ka_reg();
  _kahp_reg();
  _kc_reg();
  _kdr_reg();
  _km_reg();
  _naf_reg();
}

#if defined(__cplusplus)
}
#endif
