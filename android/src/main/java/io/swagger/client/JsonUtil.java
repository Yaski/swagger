package io.swagger.client;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.reflect.TypeToken;
import java.lang.reflect.Type;
import java.util.List;
import io.swagger.client.model.*;

public class JsonUtil {
  public static GsonBuilder gsonBuilder;

  static {
    gsonBuilder = new GsonBuilder();
    gsonBuilder.serializeNulls();
    gsonBuilder.setDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSZ");
  }

  public static Gson getGson() {
    return gsonBuilder.create();
  }

  public static String serialize(Object obj){
    return getGson().toJson(obj);
  }

  public static <T> T deserializeToList(String jsonString, Class cls){
    return getGson().fromJson(jsonString, getListTypeForDeserialization(cls));
  }

  public static <T> T deserializeToObject(String jsonString, Class cls){
    return getGson().fromJson(jsonString, getTypeForDeserialization(cls));
  }

  public static Type getListTypeForDeserialization(Class cls) {
    String className = cls.getSimpleName();
    
    if ("ACL".equalsIgnoreCase(className)) {
      return new TypeToken<List<ACL>>(){}.getType();
    }
    
    if ("Allow".equalsIgnoreCase(className)) {
      return new TypeToken<List<Allow>>(){}.getType();
    }
    
    if ("BoolFilter".equalsIgnoreCase(className)) {
      return new TypeToken<List<BoolFilter>>(){}.getType();
    }
    
    if ("BoolQuery".equalsIgnoreCase(className)) {
      return new TypeToken<List<BoolQuery>>(){}.getType();
    }
    
    if ("Cache".equalsIgnoreCase(className)) {
      return new TypeToken<List<Cache>>(){}.getType();
    }
    
    if ("CacheItem".equalsIgnoreCase(className)) {
      return new TypeToken<List<CacheItem>>(){}.getType();
    }
    
    if ("CacheRequest".equalsIgnoreCase(className)) {
      return new TypeToken<List<CacheRequest>>(){}.getType();
    }
    
    if ("CloudFile".equalsIgnoreCase(className)) {
      return new TypeToken<List<CloudFile>>(){}.getType();
    }
    
    if ("CloudObject".equalsIgnoreCase(className)) {
      return new TypeToken<List<CloudObject>>(){}.getType();
    }
    
    if ("CloudObjectSaveRequest".equalsIgnoreCase(className)) {
      return new TypeToken<List<CloudObjectSaveRequest>>(){}.getType();
    }
    
    if ("CloudQuery".equalsIgnoreCase(className)) {
      return new TypeToken<List<CloudQuery>>(){}.getType();
    }
    
    if ("CloudQueryCount".equalsIgnoreCase(className)) {
      return new TypeToken<List<CloudQueryCount>>(){}.getType();
    }
    
    if ("CloudQueryDistinct".equalsIgnoreCase(className)) {
      return new TypeToken<List<CloudQueryDistinct>>(){}.getType();
    }
    
    if ("CloudQueryFindById".equalsIgnoreCase(className)) {
      return new TypeToken<List<CloudQueryFindById>>(){}.getType();
    }
    
    if ("CloudQueryFindOne".equalsIgnoreCase(className)) {
      return new TypeToken<List<CloudQueryFindOne>>(){}.getType();
    }
    
    if ("CloudQueryId".equalsIgnoreCase(className)) {
      return new TypeToken<List<CloudQueryId>>(){}.getType();
    }
    
    if ("CloudRole".equalsIgnoreCase(className)) {
      return new TypeToken<List<CloudRole>>(){}.getType();
    }
    
    if ("CloudSearch".equalsIgnoreCase(className)) {
      return new TypeToken<List<CloudSearch>>(){}.getType();
    }
    
    if ("CloudTable".equalsIgnoreCase(className)) {
      return new TypeToken<List<CloudTable>>(){}.getType();
    }
    
    if ("CloudTableSave".equalsIgnoreCase(className)) {
      return new TypeToken<List<CloudTableSave>>(){}.getType();
    }
    
    if ("CloudUser".equalsIgnoreCase(className)) {
      return new TypeToken<List<CloudUser>>(){}.getType();
    }
    
    if ("Column".equalsIgnoreCase(className)) {
      return new TypeToken<List<Column>>(){}.getType();
    }
    
    if ("Deny".equalsIgnoreCase(className)) {
      return new TypeToken<List<Deny>>(){}.getType();
    }
    
    if ("EmailBody".equalsIgnoreCase(className)) {
      return new TypeToken<List<EmailBody>>(){}.getType();
    }
    
    if ("FileBody".equalsIgnoreCase(className)) {
      return new TypeToken<List<FileBody>>(){}.getType();
    }
    
    if ("FilterBody".equalsIgnoreCase(className)) {
      return new TypeToken<List<FilterBody>>(){}.getType();
    }
    
    if ("Filtered".equalsIgnoreCase(className)) {
      return new TypeToken<List<Filtered>>(){}.getType();
    }
    
    if ("KeyBody".equalsIgnoreCase(className)) {
      return new TypeToken<List<KeyBody>>(){}.getType();
    }
    
    if ("ModifiedQueue".equalsIgnoreCase(className)) {
      return new TypeToken<List<ModifiedQueue>>(){}.getType();
    }
    
    if ("ModifiedQueueBody".equalsIgnoreCase(className)) {
      return new TypeToken<List<ModifiedQueueBody>>(){}.getType();
    }
    
    if ("PasswordChangeBody".equalsIgnoreCase(className)) {
      return new TypeToken<List<PasswordChangeBody>>(){}.getType();
    }
    
    if ("Query".equalsIgnoreCase(className)) {
      return new TypeToken<List<Query>>(){}.getType();
    }
    
    if ("Queue".equalsIgnoreCase(className)) {
      return new TypeToken<List<Queue>>(){}.getType();
    }
    
    if ("QueueBody".equalsIgnoreCase(className)) {
      return new TypeToken<List<QueueBody>>(){}.getType();
    }
    
    if ("QueueMessage".equalsIgnoreCase(className)) {
      return new TypeToken<List<QueueMessage>>(){}.getType();
    }
    
    if ("QueuePayloadWithCount".equalsIgnoreCase(className)) {
      return new TypeToken<List<QueuePayloadWithCount>>(){}.getType();
    }
    
    if ("Read".equalsIgnoreCase(className)) {
      return new TypeToken<List<Read>>(){}.getType();
    }
    
    if ("RefreshMessageTimeoutBody".equalsIgnoreCase(className)) {
      return new TypeToken<List<RefreshMessageTimeoutBody>>(){}.getType();
    }
    
    if ("RoleBody".equalsIgnoreCase(className)) {
      return new TypeToken<List<RoleBody>>(){}.getType();
    }
    
    if ("SearchFilter".equalsIgnoreCase(className)) {
      return new TypeToken<List<SearchFilter>>(){}.getType();
    }
    
    if ("SearchQuery".equalsIgnoreCase(className)) {
      return new TypeToken<List<SearchQuery>>(){}.getType();
    }
    
    if ("UserBody".equalsIgnoreCase(className)) {
      return new TypeToken<List<UserBody>>(){}.getType();
    }
    
    if ("UserRoleBody".equalsIgnoreCase(className)) {
      return new TypeToken<List<UserRoleBody>>(){}.getType();
    }
    
    if ("Write".equalsIgnoreCase(className)) {
      return new TypeToken<List<Write>>(){}.getType();
    }
    
    return new TypeToken<List<Object>>(){}.getType();
  }

  public static Type getTypeForDeserialization(Class cls) {
    String className = cls.getSimpleName();
    
    if ("ACL".equalsIgnoreCase(className)) {
      return new TypeToken<ACL>(){}.getType();
    }
    
    if ("Allow".equalsIgnoreCase(className)) {
      return new TypeToken<Allow>(){}.getType();
    }
    
    if ("BoolFilter".equalsIgnoreCase(className)) {
      return new TypeToken<BoolFilter>(){}.getType();
    }
    
    if ("BoolQuery".equalsIgnoreCase(className)) {
      return new TypeToken<BoolQuery>(){}.getType();
    }
    
    if ("Cache".equalsIgnoreCase(className)) {
      return new TypeToken<Cache>(){}.getType();
    }
    
    if ("CacheItem".equalsIgnoreCase(className)) {
      return new TypeToken<CacheItem>(){}.getType();
    }
    
    if ("CacheRequest".equalsIgnoreCase(className)) {
      return new TypeToken<CacheRequest>(){}.getType();
    }
    
    if ("CloudFile".equalsIgnoreCase(className)) {
      return new TypeToken<CloudFile>(){}.getType();
    }
    
    if ("CloudObject".equalsIgnoreCase(className)) {
      return new TypeToken<CloudObject>(){}.getType();
    }
    
    if ("CloudObjectSaveRequest".equalsIgnoreCase(className)) {
      return new TypeToken<CloudObjectSaveRequest>(){}.getType();
    }
    
    if ("CloudQuery".equalsIgnoreCase(className)) {
      return new TypeToken<CloudQuery>(){}.getType();
    }
    
    if ("CloudQueryCount".equalsIgnoreCase(className)) {
      return new TypeToken<CloudQueryCount>(){}.getType();
    }
    
    if ("CloudQueryDistinct".equalsIgnoreCase(className)) {
      return new TypeToken<CloudQueryDistinct>(){}.getType();
    }
    
    if ("CloudQueryFindById".equalsIgnoreCase(className)) {
      return new TypeToken<CloudQueryFindById>(){}.getType();
    }
    
    if ("CloudQueryFindOne".equalsIgnoreCase(className)) {
      return new TypeToken<CloudQueryFindOne>(){}.getType();
    }
    
    if ("CloudQueryId".equalsIgnoreCase(className)) {
      return new TypeToken<CloudQueryId>(){}.getType();
    }
    
    if ("CloudRole".equalsIgnoreCase(className)) {
      return new TypeToken<CloudRole>(){}.getType();
    }
    
    if ("CloudSearch".equalsIgnoreCase(className)) {
      return new TypeToken<CloudSearch>(){}.getType();
    }
    
    if ("CloudTable".equalsIgnoreCase(className)) {
      return new TypeToken<CloudTable>(){}.getType();
    }
    
    if ("CloudTableSave".equalsIgnoreCase(className)) {
      return new TypeToken<CloudTableSave>(){}.getType();
    }
    
    if ("CloudUser".equalsIgnoreCase(className)) {
      return new TypeToken<CloudUser>(){}.getType();
    }
    
    if ("Column".equalsIgnoreCase(className)) {
      return new TypeToken<Column>(){}.getType();
    }
    
    if ("Deny".equalsIgnoreCase(className)) {
      return new TypeToken<Deny>(){}.getType();
    }
    
    if ("EmailBody".equalsIgnoreCase(className)) {
      return new TypeToken<EmailBody>(){}.getType();
    }
    
    if ("FileBody".equalsIgnoreCase(className)) {
      return new TypeToken<FileBody>(){}.getType();
    }
    
    if ("FilterBody".equalsIgnoreCase(className)) {
      return new TypeToken<FilterBody>(){}.getType();
    }
    
    if ("Filtered".equalsIgnoreCase(className)) {
      return new TypeToken<Filtered>(){}.getType();
    }
    
    if ("KeyBody".equalsIgnoreCase(className)) {
      return new TypeToken<KeyBody>(){}.getType();
    }
    
    if ("ModifiedQueue".equalsIgnoreCase(className)) {
      return new TypeToken<ModifiedQueue>(){}.getType();
    }
    
    if ("ModifiedQueueBody".equalsIgnoreCase(className)) {
      return new TypeToken<ModifiedQueueBody>(){}.getType();
    }
    
    if ("PasswordChangeBody".equalsIgnoreCase(className)) {
      return new TypeToken<PasswordChangeBody>(){}.getType();
    }
    
    if ("Query".equalsIgnoreCase(className)) {
      return new TypeToken<Query>(){}.getType();
    }
    
    if ("Queue".equalsIgnoreCase(className)) {
      return new TypeToken<Queue>(){}.getType();
    }
    
    if ("QueueBody".equalsIgnoreCase(className)) {
      return new TypeToken<QueueBody>(){}.getType();
    }
    
    if ("QueueMessage".equalsIgnoreCase(className)) {
      return new TypeToken<QueueMessage>(){}.getType();
    }
    
    if ("QueuePayloadWithCount".equalsIgnoreCase(className)) {
      return new TypeToken<QueuePayloadWithCount>(){}.getType();
    }
    
    if ("Read".equalsIgnoreCase(className)) {
      return new TypeToken<Read>(){}.getType();
    }
    
    if ("RefreshMessageTimeoutBody".equalsIgnoreCase(className)) {
      return new TypeToken<RefreshMessageTimeoutBody>(){}.getType();
    }
    
    if ("RoleBody".equalsIgnoreCase(className)) {
      return new TypeToken<RoleBody>(){}.getType();
    }
    
    if ("SearchFilter".equalsIgnoreCase(className)) {
      return new TypeToken<SearchFilter>(){}.getType();
    }
    
    if ("SearchQuery".equalsIgnoreCase(className)) {
      return new TypeToken<SearchQuery>(){}.getType();
    }
    
    if ("UserBody".equalsIgnoreCase(className)) {
      return new TypeToken<UserBody>(){}.getType();
    }
    
    if ("UserRoleBody".equalsIgnoreCase(className)) {
      return new TypeToken<UserRoleBody>(){}.getType();
    }
    
    if ("Write".equalsIgnoreCase(className)) {
      return new TypeToken<Write>(){}.getType();
    }
    
    return new TypeToken<Object>(){}.getType();
  }

};
