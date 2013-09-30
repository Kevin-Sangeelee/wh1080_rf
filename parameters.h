#define P_ALTITUDE	0
#define P_LNA		1
#define P_RSSI		2
#define P_BW		3
#define P_AFC		4
#define P_AFC_STROBE	5

typedef struct param_desc {

	int id;
	char *name;
	char *value;
	
} param_desc_t;

param_desc_t params[] = {

	{P_ALTITUDE, "altitude", "test"},
	{P_LNA, "lna", "test"},
	{P_RSSI, "rssi", "test"},
	{P_BW, "bandwidth", "test"},
	{P_AFC, "afc", "test"},
	{P_AFC_STROBE, "afc-strobe", "test"},

};

int parse_parameters(int argc, char **argv);
int parse_rcfile();
