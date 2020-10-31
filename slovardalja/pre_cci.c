# 1 "d:\\projects\\vugen\\slovardalja\\\\combined_slovardalja.c"
# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "d:\\projects\\vugen\\slovardalja\\\\combined_slovardalja.c" 2

# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "d:\\projects\\vugen\\slovardalja\\\\combined_slovardalja.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "d:\\projects\\vugen\\slovardalja\\\\combined_slovardalja.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "d:\\projects\\vugen\\slovardalja\\\\combined_slovardalja.c" 2

# 1 "Action.c" 1
Action()
{
	lr_save_string("UC01", "UC");
	
	lr_start_transaction(lr_eval_string("{UC}_Load_slovardalja"));
	
	
	web_add_header("Upgrade-Insecure-Requests", 
		"1");
 
 
 
 
 
 
 
 
 
 

	web_url("slovardalja.net", 
		"URL=http://slovardalja.net/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://www.google-analytics.com/urchin.js", "ENDITEM", 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=1.4&utmn=721642572&utmcs=windows-1251&utmsr=1366x768&utmsc=24-bit&utmul=ru-ru&utmje=0&utmfl=-&utmcn=1&utmdt=%D0%A2%D0%BE%D0%BB%D0%BA%D0%BE%D0%B2%D1%8B%D0%B9%20%D1%81%D0%BB%D0%BE%D0%B2%D0%B0%D1%80%D1%8C%20%D0%94%D0%B0%D0%BB%D1%8F%20%D0%BE%D0%BD%D0%BB%D0%B0%D0%B9%D0%BD&utmhn=slovardalja.net&utmhid=838536387&utmr=-&utmp=/&utmac=UA-4839607-1&utmcc="
		"__utma%3D196215790.721642572.1604086363.1604086363.1604086363.1%3B%2B__utmz%3D196215790.1604086363.1.1.utmccn%3D(direct)%7Cutmcsr%3D(direct)%7Cutmcmd%3D(none)%3B%2B", "ENDITEM", 
		"Url=https://pagead2.googlesyndication.com/pagead/js/r20201027/r20190131/show_ads_impl_fy2019.js", "ENDITEM", 
		"Url=https://ssp-rtb.sape.ru/data/?callback=sapeRTBreadRtStatResponse_53471&srtbid=95403&scids=93390459&sx=1366&sy=657&ref=&allimps=0&fl=0&tz=%2B03%3A00&u=http%3A%2F%2Fslovardalja.net%2F", "ENDITEM", 
		"Url=http://p1.dircont3.com/nv.js", "ENDITEM", 
		"Url=https://counter.yadro.ru/hit?q;t44.1;r;s1366*768*24;uhttp%3A//slovardalja.net/;h%u0422%u043E%u043B%u043A%u043E%u0432%u044B%u0439%20%u0441%u043B%u043E%u0432%u0430%u0440%u044C%20%u0414%u0430%u043B%u044F%20%u043E%u043D%u043B%u0430%u0439%u043D;0.23858082708359452", "ENDITEM", 
		"Url=https://adservice.google.ru/adsid/integrator.js?domain=slovardalja.net", "ENDITEM", 
		"Url=https://adservice.google.com/adsid/integrator.js?domain=slovardalja.net", "ENDITEM", 
		"Url=https://partner.googleadservices.com/gampad/cookie.js?domain=slovardalja.net&callback=_gfp_s_&client=ca-pub-3303990594242526", "ENDITEM", 
		"Url=https://www.googletagservices.com/activeview/js/current/osd.js?cb=%2Fr20100101", "ENDITEM", 
		"Url=/favicon.ico", "ENDITEM", 
		"Url=https://tpc.googlesyndication.com/sodar/sodar2.js", "ENDITEM", 
		"Url=https://pagead2.googlesyndication.com/pagead/gen_204?id=sodar2&v=219&t=2&li=gda_r20201027&jk=1961376086312261&bg="
		"!uLulu5vNAAVp0lmVaVj6a5E85297RAIAAACSUgAAABcKAF7gO5IB6uplz0qC6iiUbDyhOBlrFDSVhx-ne4d5G669nqm-TyX3V-xQnB_eLG05FmU_lEJkVGXjHcKdqiSWTyVe-8duQDmcCpoDAgIqCCueFZh-3A-TaL6QESITkP3QmQHfTQEgIVNca3rG4mnoRemen0Ijcib9FHedn1ouwRdhAXbPcYKoPC-tbPBMeaU_rltF6iLOjvZix4qjTsizQP5oYFIPANHjOBfoBSroWB0TzVGkZbnYRDFrQKVbUBON7TzQgAb5HnA-Sz53XhuwRcsc_Gyxh18Bkxv9CQNWQV4s9O8icE4DypYGrAun1iTWEcMZAT4Z_syeYoWWs91mbm5CYogeL-cp-OlWoZxJBzLcZbCe4yeKvPkECSaFj65oYpbHBn1buZnzMJR7JQ2vuGMs4w3fgiXKB8G_Zjt39O2nKge4pubSE6Y1eHjws_C1iLIjCVPoP"
		"EXRN3JSywK1496b-yR1gAKxEvXZBQpfzw-vOOt0DLsDZLB8oB-109g3hK93LUFBFuVFQsjr_xP1AT2A8gsp42Fk8Vc5Io3zzhKPSkeKGEvO-rZX6to7zMEXwzmA7ZK4s8ROTP3tCyWuvrTzH_K_c8TxCGDdCGSl1BpSTDLxOzYrxxWCXao70zV8VN3dZ6NJp-03fo4sV8DHg0DFxq5ILckt8O2ZjztUbDXRfz8T0uXU48vn5reWfS7QlBY0Duuh0eNh3DTwQ52fm0BXrOUAvoMo69e5ZE1f-hLrFx8duO4YM7wwWVb1hRTw850", "ENDITEM", 
		"Url=https://www.google-analytics.com/__utm.gif?utmwv=1.4&utmn=702996593&utmcs=windows-1251&utmsr=1366x768&utmsc=24-bit&utmul=ru-ru&utmje=0&utmfl=-&utmdt=%D0%A2%D0%BE%D0%BB%D0%BA%D0%BE%D0%B2%D1%8B%D0%B9%20%D1%81%D0%BB%D0%BE%D0%B2%D0%B0%D1%80%D1%8C%20%D0%94%D0%B0%D0%BB%D1%8F%20%D0%BE%D0%BD%D0%BB%D0%B0%D0%B9%D0%BD&utmhn=slovardalja.net&utmhid=2111305585&utmr=0&utmp=/view_search.php&utmac=UA-4839607-1&utmcc="
		"__utma%3D196215790.721642572.1604086363.1604086363.1604086363.1%3B%2B__utmz%3D196215790.1604086363.1.1.utmccn%3D(direct)%7Cutmcsr%3D(direct)%7Cutmcmd%3D(none)%3B%2B", "ENDITEM", 
		"Url=http://an.yandex.ru/system/context.js", "ENDITEM", 
		"Url=http://pagead2.googlesyndication.com/pagead/show_ads.js", "ENDITEM", 
		"Url=https://partner.googleadservices.com/gampad/cookie.js?domain=slovardalja.net&callback=_gfp_s_&client=pub-3303990594242526&cookie=ID%3De1c612a5d93655c6-229d4daf15b9002a%3AT%3D1604086382%3ART%3D1604086382%3AS%3DALNI_MZqmIz7tIhgirMywdIxh7I5RBnxjA", "ENDITEM", 
		"Url=https://counter.yadro.ru/hit?q;t44.1;rhttp%3A//slovardalja.net/;s1366*768*24;uhttp%3A//slovardalja.net/view_search.php;h%u0422%u043E%u043B%u043A%u043E%u0432%u044B%u0439%20%u0441%u043B%u043E%u0432%u0430%u0440%u044C%20%u0414%u0430%u043B%u044F%20%u043E%u043D%u043B%u0430%u0439%u043D;0.7166116382316416", "ENDITEM", 
		"Url=https://ssp-rtb.sape.ru/data/?callback=sapeRTBreadRtStatResponse_53471&srtbid=95403&scids=93390459&sx=1366&sy=657&ref=http%3A%2F%2Fslovardalja.net%2F&allimps=0&fl=0&tz=%2B03%3A00&u=http%3A%2F%2Fslovardalja.net%2Fview_search.php", "ENDITEM", 
		"Url=https://an.yandex.ru/partner-code-bundles/12857/163a154fd0c0be906789.js", "ENDITEM", 
		"Url=https://an.yandex.ru/partner-code-bundles/12857/7a7f1218ad41ee2964e8.js", "ENDITEM", 
		"Url=https://an.yandex.ru/partner-code-bundles/12857/3bfae02193b837ceee13.js", "ENDITEM", 
		"Url=https://an.yandex.ru/meta/224874?redir-setuniq=1&grab=dNCi0L7Qu9C60L7QstGL0Lkg0YHQu9C-0LLQsNGA0Ywg0JTQsNC70Y8g0L7QvdC70LDQudC9CjHQotC-0LvQutC-0LLRi9C5INGB0LvQvtCy0LDRgNGMINCU0LDQu9GPINC-0L3Qu9Cw0LnQvSAKMtCg0LXQt9GD0LvRjNGC0LDRgtGLINC_0L7QuNGB0LrQsCAK&target-ref=http%3A%2F%2Fslovardalja.net%2Fview_search.php&page-ref=http%3A%2F%2Fslovardalja.net%2F&charset=utf-8&imp-id=4&enable-flat-highlight=1&test-tag=312811058102274&ad-session-id=3099751604086561163&target-id=21012060&pcode-test-ids="
		"286599%2C0%2C78&pcode-flags=%7B%22DEFAULT_SSR_FORMATS%22%3A%5B%22posterVertical%22%2C%22posterHorizontal%22%2C%22motion%22%5D%2C%22DEFAULT_BLACKLIST_PAGES%22%3A%5B%22248936%22%5D%2C%22DEFAULT_BLACKLIST_DEVICES%22%3A%5B%5D%2C%22changableMeta%22%3A1%7D&server-side-rendering-enabled-formats=posterVertical%0AposterHorizontal%0Amotion&pcode-version=12857&flash-ver=0&pcode-icookie=6633084301604086554&available-width=704&layout-config="
		"%7B%22win_width%22%3A1366%2C%22win_height%22%3A657%2C%22pixel_ratio%22%3A1%2C%22bandwidth%22%3A8.85%2C%22w%22%3A704%2C%22h%22%3A0%2C%22width%22%3A704%2C%22height%22%3A0%2C%22left%22%3A343%2C%22top%22%3A293%2C%22visible%22%3A1%2C%22ad_no%22%3A0%2C%22req_no%22%3A0%7D&callback=Ya%5B6238424802827%5D", "ENDITEM", 
		"LAST");

	web_set_sockets_option("SSL_VERSION", "2&3");

 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	
	lr_end_transaction(lr_eval_string("{UC}_Load_slovardalja"), 2);
	
	lr_think_time(10);
	
	lr_start_transaction(lr_eval_string("{UC}_History_slovardalja"));

	
	 

 
 

 

	web_submit_data("view_search.php", 
		"Action=http://slovardalja.net/view_search.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=search", "Value=история", "ENDITEM", 
		"Name=submit_s", "Value=Искать", "ENDITEM", 
		"LAST");

 
	
	web_custom_request("1akds.json_4", 
		"URL=http://newrrb.bid/1akds.json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"blocksId\":[\"9050\"],\"isAdBlock\":false,\"url\":\"http://slovardalja.net/view_search.php\",\"v\":\"2.2.1-~~SHA~VERSION~STRING~~\",\"r\":\"8cmivl9bfu\",\"city\":null,\"region\":null,\"countryCode\":null,\"width\":1366,\"skip\":[],\"referrer\":\"http://slovardalja.net/\",\"sessionReferrer\":\"http://no.domain/\"}", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 

	
	
	 
	
	
	web_reg_save_param_json(
        "ParamName=testParam",
        "QueryString=$.error",
        "SEARCH_FILTERS",
        "Scope=Body",
        "LAST");
	
	
		
	web_url("1akds.json_5",
		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22start%22%2C%22ts%22%3A128132%7D%5D&url=&v=2.2.1-1c8fa83&r=8cmivl9bfu&referrer=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("1akds.json_6", 
		"URL=http://newrrb.bid/1akds.json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"blocksId\":[\"148752\",\"149099\"],\"isAdBlock\":false,\"url\":\"http://slovardalja.net/view_search.php\",\"v\":\"2.2.1-~~SHA~VERSION~STRING~~\",\"r\":\"8cmivl9bfu\",\"city\":null,\"region\":null,\"countryCode\":null,\"width\":1366,\"skip\":[],\"referrer\":\"http://slovardalja.net/\",\"sessionReferrer\":\"http://no.domain/\"}", 
		"LAST");

 
 
 
 

	web_url("1akds.json_7", 
		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22loaded%22%2C%22ts%22%3A128145%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A9050%2C%22ts%22%3A128147%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A148752%2C%22ts%22%3A132992%7D%2C%7B%22t%22%3A%22fetch%22%2C%22bId%22%3A149099%2C%22ts%22%3A132992%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fview_search.php&v=2.2.1-1c8fa83&r=8cmivl9bfu&referrer=http%3A%2F%2Fslovardalja.net%2F", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 

	web_url("zrt_lookup.html_2", 
		"URL=https://googleads.g.doubleclick.net/pagead/html/r20201027/r20190131/zrt_lookup.html", 
		"Resource=0", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINODYuMC40MjQwLjExMRopCAUQARobCg0IBRAGGAEiAzAwMTABEKbKCRoCGAfs82KiIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARDxhwgaAhgH7vq3HSIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQjZIIGgIYB_jt-HciBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABEPiwCBoCGAfc_acCIgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYBzGxyUgiBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEELwcGgIYBx8bicYiBCABIAIoBBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAMaAhgHfGc_tyIEIAEgAigGGigIDxABGhoKDQgPEAYYASIDMDAxMAEQlE0aAhgHjRhNMiIEIAEgAigBGicIChAIGh"
		"kKDQgKEAgYASIDMDAxMAEQBhoCGAe2bnt9IgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAfGgIYB4GbqZEiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEKEKGgIYB8-fldMiBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEJd-GgIYB1F-tK8iBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABELTABBoCGAcwigGfIgQgASACKAEaKAgQEAEaGgoNCBAQBhgBIgMwMDEwARCYBhoCGAfq0DtcIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", "ENDITEM", 
		"LAST");

 
 

	web_url("1akds.json_8", 
		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22injected%22%2C%22bId%22%3A9050%2C%22aId%22%3A30300%2C%22ts%22%3A133026%7D%2C%7B%22t%22%3A%22injected%22%2C%22bId%22%3A148752%2C%22aId%22%3A467569%2C%22ts%22%3A138002%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fview_search.php&v=2.2.1-1c8fa83&r=8cmivl9bfu&referrer=http%3A%2F%2Fslovardalja.net%2F", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://safebrowsing.googleapis.com/v4/fullHashes:find?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINODYuMC40MjQwLjExMRIbCg0IBRAGGAEiAzAwMTABEKbKCRoCGAfs82KiEhsKDQgBEAYYASIDMDAxMAEQ8YcIGgIYB-76tx0SGwoNCAMQBhgBIgMwMDEwARCNkggaAhgH-O34dxIbCg0IBxAGGAEiAzAwMTABEPiwCBoCGAfc_acCEhkKDQgBEAYYASIDMDAxMAMQFBoCGAcxsclIEhoKDQgBEAgYASIDMDAxMAQQvBwaAhgHHxuJxhIZCg0ICRAGGAEiAzAwMTAGEAMaAhgHfGc_txIaCg0IDxAGGAEiAzAwMTABEJRNGgIYB40YTTISGQoNCAoQCBgBIgMwMDEwARAGGgIYB7Zue30SGQoNCAkQBhgBIgMwMDEwARAfGgIYB4GbqZESGgoNCAgQBhgBIgMwMDEwARChChoCGAfPn5XTEhoKDQgNEAYYASIDMDAxMAEQl34aAhgHUX60rxIbCg0IDhAGGA"
		"EiAzAwMTABELTABBoCGAcwigGfEhoKDQgQEAYYASIDMDAxMAEQmAYaAhgH6tA7XBosCAEIAwgFCAYIBwgICAkICggNCA4IDwgQEAEQCBoGCgRl3xmoIAEgAyAEIAY=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", "ENDITEM", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 

	web_url("ads_3", 
		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-3303990594242526&output=html&h=600&slotname=9609848646&adk=4291559146&adf=1803467449&pi=t.ma~as.9609848646&w=160&lmt=1604086560&psa=1&guci=2.2.0.0.2.2.0.0&format=160x600&url=http%3A%2F%2Fslovardalja.net%2Fview_search.php&flash=0&wgl=1&tt_state=W3siaXNzdWVyT3JpZ2luIjoiaHR0cHM6Ly9hZHNlcnZpY2UuZ29vZ2xlLmNvbSIsInN0YXRlIjowfSx7Imlzc3Vlck9yaWdpbiI6Imh0dHBzOi8vYXR0ZXN0YXRpb24uYW5kcm9pZC5jb20iLCJzdGF0ZSI6MH1d&dt=1604086555791&bpp=9&bdt=5000&"
		"idt=4960&shv=r20201027&cbv=r20190131&ptt=9&saldr=aa&abxe=1&cookie=ID%3De1c612a5d93655c6-229d4daf15b9002a%3AT%3D1604086382%3ART%3D1604086382%3AS%3DALNI_MZqmIz7tIhgirMywdIxh7I5RBnxjA&correlator=4613063621038&frm=20&pv=2&ga_vid=721642572.1604086363&ga_sid=1604086363&ga_hid=2111305585&ga_fc=1&iag=0&icsg=8431744&dssz=21&mdo=0&mso=0&u_tz=180&u_his=2&u_java=0&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_nplug=3&u_nmime=4&adx=180&ady=173&biw=1349&bih=657&scr_x=0&scr_y=0&eid=42530671%2C21068084%2C21065724"
		"&oid=3&pvsid=3875297866738772&pem=919&ref=http%3A%2F%2Fslovardalja.net%2F&rx=0&eae=0&fc=896&brdim=0%2C0%2C0%2C0%2C1366%2C0%2C1366%2C728%2C1366%2C657&vis=1&rsz=d%7C%7CEe%7Cn&abl=XS&pfx=0&fu=8192&bc=23&ifi=1&uci=a!1&fsb=1&xpc=B1aPVpaZ2Z&p=http%3A//slovardalja.net&dtd=5183", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"LAST");

 
 

	web_url("1akds.json_9", 
		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22injected%22%2C%22bId%22%3A149099%2C%22aId%22%3A466414%2C%22ts%22%3A138672%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fview_search.php&v=2.2.1-1c8fa83&r=8cmivl9bfu&referrer=http%3A%2F%2Fslovardalja.net%2F", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 

	web_url("ads_4", 
		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-3303990594242526&output=html&adk=1812271804&adf=3025194257&lmt=1604086561&plat=1%3A32776%2C2%3A32776%2C9%3A32776%2C10%3A32%2C11%3A32%2C16%3A8388608%2C17%3A32%2C24%3A32%2C25%3A32%2C30%3A1081344%2C32%3A32%2C40%3A32&guci=2.2.0.0.2.2.0.0&format=0x0&url=http%3A%2F%2Fslovardalja.net%2Fview_search.php&ea=0&flash=0&pra=7&wgl=1&tt_state="
		"W3siaXNzdWVyT3JpZ2luIjoiaHR0cHM6Ly9hZHNlcnZpY2UuZ29vZ2xlLmNvbSIsInN0YXRlIjowfSx7Imlzc3Vlck9yaWdpbiI6Imh0dHBzOi8vYXR0ZXN0YXRpb24uYW5kcm9pZC5jb20iLCJzdGF0ZSI6MH1d&dt=1604086555800&bpp=8&bdt=5009&idt=5308&shv=r20201027&cbv=r20190131&ptt=9&saldr=aa&abxe=1&cookie=ID%3De1c612a5d93655c6-229d4daf15b9002a%3AT%3D1604086382%3ART%3D1604086382%3AS%3DALNI_MZqmIz7tIhgirMywdIxh7I5RBnxjA&prev_fmts=160x600&nras=1&correlator=4613063621038&frm=20&pv=1&ga_vid=721642572.1604086363&ga_sid=1604086363&ga_hid=2111305585&"
		"ga_fc=1&iag=0&icsg=545302656&dssz=22&mdo=0&mso=0&u_tz=180&u_his=2&u_java=0&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_nplug=3&u_nmime=4&adx=-12245933&ady=-12245933&biw=1349&bih=657&scr_x=0&scr_y=0&eid=42530671%2C21068084%2C21065724&oid=3&pvsid=3875297866738772&pem=919&ref=http%3A%2F%2Fslovardalja.net%2F&rx=0&eae=2&fc=896&brdim=0%2C0%2C0%2C0%2C1366%2C0%2C1366%2C728%2C1366%2C657&vis=1&rsz=%7C%7Cs%7C&abl=NS&fu=8192&bc=23&ifi=1&uci=a!1&fsb=1&dtd=5326", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"LAST");

 
 

	web_url("1akds.json_10", 
		"URL=http://newrrb.bid/1akds.json?stat=%5B%7B%22t%22%3A%22thick%22%2C%22bId%22%3A149099%2C%22aId%22%3A466414%2C%22ts%22%3A138846%7D%5D&url=http%3A%2F%2Fslovardalja.net%2Fview_search.php&v=2.2.1-1c8fa83&r=8cmivl9bfu&referrer=http%3A%2F%2Fslovardalja.net%2F", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 

	web_url("ads_5", 
		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-3303990594242526&output=html&h=600&slotname=8938184216&adk=1062145475&adf=2802373691&pi=t.ma~as.8938184216&w=120&lmt=1604086561&guci=2.2.0.0.2.2.0.0&url=http%3A%2F%2Fslovardalja.net%2Fview_search.php&flash=0&wgl=1&tt_state=W3siaXNzdWVyT3JpZ2luIjoiaHR0cHM6Ly9hZHNlcnZpY2UuZ29vZ2xlLmNvbSIsInN0YXRlIjowfSx7Imlzc3Vlck9yaWdpbiI6Imh0dHBzOi8vYXR0ZXN0YXRpb24uYW5kcm9pZC5jb20iLCJzdGF0ZSI6MH1d&dt=1604086561223&bpp=8&bdt=10432&idt=9&shv=r20201027&"
		"cbv=r20190131&ptt=5&saldr=sa&abxe=1&cookie=ID%3De1c612a5d93655c6-229d4daf15b9002a%3AT%3D1604086382%3ART%3D1604086382%3AS%3DALNI_MZqmIz7tIhgirMywdIxh7I5RBnxjA&prev_fmts=160x600%2C0x0&nras=1&correlator=4613063621038&frm=20&pv=1&ga_vid=721642572.1604086363&ga_sid=1604086363&ga_hid=2111305585&ga_fc=1&iag=0&icsg=2233550768256&dssz=28&mdo=0&mso=0&u_tz=180&u_his=2&u_java=0&u_h=768&u_w=1366&u_ah=728&u_aw=1366&u_cd=24&u_nplug=3&u_nmime=4&adx=1050&ady=173&biw=1349&bih=657&scr_x=0&scr_y=0&eid="
		"42530671%2C21068084%2C21065724&oid=3&pvsid=3875297866738772&pem=919&ref=http%3A%2F%2Fslovardalja.net%2F&rx=0&eae=0&fc=896&brdim=0%2C0%2C0%2C0%2C1366%2C0%2C1366%2C728%2C1366%2C657&vis=1&rsz=d%7C%7Ce%7Cn&abl=XS&pfx=0&fu=8192&bc=23&ifi=2&uci=a!2&fsb=1&xpc=UgzuCjzq3M&p=http%3A//slovardalja.net&dtd=152", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://slovardalja.net/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"LAST");

 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	
		
	lr_end_transaction(lr_eval_string("{UC}_History_slovardalja"), 2);
	
	lr_output_message("Test output %s", lr_eval_string("{testParam}"));
		
	return 0;
}
# 5 "d:\\projects\\vugen\\slovardalja\\\\combined_slovardalja.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "d:\\projects\\vugen\\slovardalja\\\\combined_slovardalja.c" 2

