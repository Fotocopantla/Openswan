stf_status build_ke(struct pluto_crypto_req_cont *cn
		    , struct state *st
		    , const struct oakley_group_desc *group
		    , enum crypto_importance importance)
{
	continuation = cn;
	memset(&rd, 0, sizeof(rd));

	crypto_req->pcr_len  = sizeof(struct pluto_crypto_req);
	crypto_req->pcr_type = pcr_build_kenonce;
	crypto_req->pcr_pcim = importance;

	pcr_init(crypto_req, pcr_build_kenonce, importance);
	crypto_req->pcr_d.kn.oakley_group   = group->group;

	return STF_SUSPEND;
}

