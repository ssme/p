/* Event header for application - AppBuilder 2.03  */

static const ApEventLink_t AbApplLinks[] = {
	{ 3, 0, 0L, 0L, 0L, &base, NULL, NULL, 0, NULL, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_base[] = {
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "base", 1012, base_realized, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "base", 1013, base_unrealized, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "a", 2007, a_arm, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "b", 2007, b_arm, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "c", 2007, c_arm, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "d", 2007, d_arm, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "e", 2007, e_arm, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "g", 2007, g_arm, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "g", 2008, g_disarm, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "f", 2007, f_arm, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "h", 2007, h_arm, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "i", 2007, i_arm, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "j", 2007, j_arm, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "k", 2007, k_arm, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "l", 2007, l_arm, 0, 0, 0, 0, },
	{ 0 }
	};

const char ApOptions[] = AB_OPTIONS;
