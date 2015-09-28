/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_DefineNamedVariableListRequest_H_
#define	_DefineNamedVariableListRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ObjectName.h"
#include <asn_SEQUENCE_OF.h>
#include "VariableSpecification.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AlternateAccess;

struct DefineNamedVariableListRequest__listOfVariable__Member {
			VariableSpecification_t	 variableSpecification;
			struct AlternateAccess	*alternateAccess	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} ;

/* DefineNamedVariableListRequest */
typedef struct DefineNamedVariableListRequest {
	ObjectName_t	 variableListName;
	struct DefineNamedVariableListRequest__listOfVariable {
		A_SEQUENCE_OF(struct DefineNamedVariableListRequest__listOfVariable__Member) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} listOfVariable;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DefineNamedVariableListRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DefineNamedVariableListRequest;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AlternateAccess.h"

#endif	/* _DefineNamedVariableListRequest_H_ */