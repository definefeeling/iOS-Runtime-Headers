/* Generated by RuntimeBrowser.
 */

@protocol IFCentroidStore <NSObject>

@required

+ (<IFCentroidStore> *)defaultStore;

- (BOOL)addFeatureVectors:(NSArray *)arg1;
- (unsigned int)deleteFeatureVectors;
- (unsigned int)deleteFeatureVectorsInExcessOf:(unsigned int)arg1;
- (unsigned int)deleteFeatureVectorsOlderThan:(NSDate *)arg1;
- (unsigned int)deleteFeatureVectorsWithFeatureLike:(IFFeatureMatch *)arg1;

@end
