// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

ERROR_MAP(JsNoError, no_error);
ERROR_MAP(JsErrorCategoryUsage, category_usage);
ERROR_MAP(JsErrorInvalidArgument, invalid_argument);
ERROR_MAP(JsErrorNullArgument, null_argument);
ERROR_MAP(JsErrorNoCurrentContext, no_current_context);
ERROR_MAP(JsErrorInExceptionState, in_exception_state);
ERROR_MAP(JsErrorNotImplemented, not_implemented);
ERROR_MAP(JsErrorWrongThread, wrong_thread);
ERROR_MAP(JsErrorRuntimeInUse, runtime_in_use);
ERROR_MAP(JsErrorBadSerializedScript, bad_serialized_script);
ERROR_MAP(JsErrorInDisabledState, in_disabled_state);
ERROR_MAP(JsErrorCannotDisableExecution, cannot_disable_execution);
ERROR_MAP(JsErrorHeapEnumInProgress, heap_enum_in_progress);
ERROR_MAP(JsErrorArgumentNotObject, argument_not_object);
ERROR_MAP(JsErrorInProfileCallback, in_profile_callback);
ERROR_MAP(JsErrorInThreadServiceCallback, in_thread_service_callback);
ERROR_MAP(JsErrorCannotSerializeDebugScript, cannot_serialize_debug_script);
ERROR_MAP(JsErrorAlreadyDebuggingContext, already_debugging_context);
ERROR_MAP(JsErrorAlreadyProfilingContext, already_profiling_context);
ERROR_MAP(JsErrorIdleNotEnabled, idle_not_enabled);
ERROR_MAP(JsCannotSetProjectionEnqueueCallback, cannot_set_projection_enqueue_callback);
ERROR_MAP(JsErrorCannotStartProjection, cannot_start_projection);
ERROR_MAP(JsErrorInObjectBeforeCollectCallback, in_object_before_collect_callback);
ERROR_MAP(JsErrorObjectNotInspectable, object_not_inspectable);
ERROR_MAP(JsErrorPropertyNotSymbol, property_not_symbol);
ERROR_MAP(JsErrorPropertyNotString, property_not_string);
ERROR_MAP(JsErrorInvalidContext, invalid_context);
ERROR_MAP(JsInvalidModuleHostInfoKind, invalid_module_host_info_kind);
ERROR_MAP(JsErrorModuleParsed, module_parsed);
ERROR_MAP(JsErrorCategoryEngine, category_engine);
ERROR_MAP(JsErrorOutOfMemory, out_of_memory);
ERROR_MAP(JsErrorBadFPUState, bad_fpu_state);
ERROR_MAP(JsErrorCategoryScript, category_script);
ERROR_MAP(JsErrorScriptException, script_exception);
ERROR_MAP(JsErrorScriptCompile, script_compile);
ERROR_MAP(JsErrorScriptTerminated, script_terminated);
ERROR_MAP(JsErrorScriptEvalDisabled, script_eval_disabled);
ERROR_MAP(JsErrorCategoryFatal, category_fatal);
ERROR_MAP(JsErrorFatal, fatal);
ERROR_MAP(JsErrorWrongRuntime, wrong_runtime);
ERROR_MAP(JsErrorCategoryDiagError, category_diag_error);
ERROR_MAP(JsErrorDiagAlreadyInDebugMode, diag_already_in_debug_mode);
ERROR_MAP(JsErrorDiagNotInDebugMode, diag_not_in_debug_mode);
ERROR_MAP(JsErrorDiagNotAtBreak, diag_not_at_break);
ERROR_MAP(JsErrorDiagInvalidHandle, diag_invalid_handle);
ERROR_MAP(JsErrorDiagObjectNotFound, diag_object_not_found);
ERROR_MAP(JsErrorDiagUnableToPerformAction, diag_unable_to_perform_action);

#ifdef JsNoWeakRefRequired
ERROR_MAP(JsNoWeakRefRequired, no_weak_ref_required);
#endif
#ifdef JsErrorPromisePending
ERROR_MAP(JsErrorPromisePending, promise_pending);
#endif
